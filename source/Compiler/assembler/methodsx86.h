#ifndef METHODSX86_H
#define METHODSX86_H

#include "abstractastdispatcher.h"
//#include "astdispatcher68000.h"
#include "source/Compiler/ast/nodebuiltinmethod.h"
#include "source/Compiler/ast/nodenumber.h"
#include "source/Compiler/ast/nodeprocedure.h"

class MethodsX86
{
public:
    MethodsX86();
    AbstractASTDispatcher* m_dispatcher;
    NodeBuiltinMethod* m_node = nullptr;


    void Assemble(Assembler* as, AbstractASTDispatcher* dispenser);


    bool Command(QString name);

    void LoadVar(Assembler *as, int paramNo);

    void ClearScreen(Assembler* as, int bits);

    void WaitForVerticalBlank(Assembler* as);

};

#endif // METHODSX86_H
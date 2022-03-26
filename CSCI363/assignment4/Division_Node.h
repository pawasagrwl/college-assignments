//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _DIVISION_NODE_H_
#define _DIVISION_NODE_H_

// Inherits from Binary_Expr_Node
#include "Binary_Expr_Node.h"

/**
 * @class Division_Node
 *
 * Create node for division in the evaluation tree.
 */
class Division_Node : public Binary_Expr_Node {
public:

    /// Default constructor
    Division_Node (void);

    /// Destructor
    virtual ~Division_Node (void);
        
    /**
     * Virtual method to accept a visitor node to visit the given node in
     * tree.
     *
     * @param[in]       v                     Expr_Node_Visitor
     */  
    virtual void accept (Expr_Node_Visitor & v);

    /// Virtual method to evaluate operation on left and right nodes.  
    virtual int eval (void);

    /**
     * Retrieve the precedence of operator.
     *
     * @return          predecence_
     */
    virtual int get_precedence (void) const;

private:

    /// Precedence of the operator
    int precedence_;
    
};

// include source file since template file
#include "Division_Node.cpp" 

#endif // _DIVISION_NODE_H_
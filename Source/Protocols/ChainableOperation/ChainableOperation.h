// Copyright (c) 2016 RAMBLER&Co
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>

// Dependencies protocols
#import "ChainableOperationInput.h"
#import "ChainableOperationOutput.h"
#import "ChainableOperationDelegate.h"

/**
 @author Egor Tolstoy
 
 The protocol describes an operation, suited for working in compound operation's chain.
 */
@protocol ChainableOperation <NSObject, NSCopying>

/**
 @author Egor Tolstoy
 
 The operation's delegate, which is informed when the operation is finished.
 */
@property (nonatomic, weak) id<ChainableOperationDelegate> _Nullable delegate;

/**
 @author Egor Tolstoy
 
 Input data source for the operation.
 */
@property (nonatomic, strong) id<ChainableOperationInput> _Nullable input;

/**
 @author Egor Tolstoy
 
 The container for the result of operation's work.
 */
@property (nonatomic, strong) id<ChainableOperationOutput> _Nullable output;

@end

// DDTMColours.m
// TranslucentApps
//
// Copyright (c) 2017 Dynastic Development
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
//  DDCreditService.h
//  CellTest
//
//  Created by AppleBetas on 2017-02-25.
//  Copyright © 2017 AppleBetas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DDCreditOption.h"

@class DDCreditOption;

@interface DDCreditService : NSObject
@property (strong, nonatomic) NSString *usernameFormatter;
@property (strong, nonatomic) NSString *actionTitleFormatter;
@property (strong, nonatomic) NSArray *linkFormatters;
@property (strong, nonatomic) NSString *imageName;

- (instancetype)initWithUsernameFormatter:(NSString *)usernameFormatter actionTitleFormatter:(NSString *)actionTitleFormatter linkFormatters:(NSArray *)linkFormatters imageName:(NSString *)imageName;
- (instancetype)initWithActionTitleFormatter:(NSString *)actionTitleFormatter linkFormatters:(NSArray *)linkFormatters imageName:(NSString *)imageName;

- (NSString *)getFormattedUsernameForOption:(DDCreditOption *)option;
- (NSString *)getActionTitleForOption:(DDCreditOption *)option;
- (NSArray *)getLinksForOption:(DDCreditOption *)option;

// Pre-set:
+ (DDCreditService *)serviceWithName:(NSString *)name;
@end

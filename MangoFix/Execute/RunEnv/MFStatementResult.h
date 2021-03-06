//
//  ANEStatementResult.h
//  MangoFix
//
//  Created by jerry.yong on 2018/2/28.
//  Copyright © 2018年 yongpengliang. All rights reserved.
//

#import <Foundation/Foundation.h>
@class MFValue;


typedef NS_ENUM(NSInteger, MFStatementResultType) {
	MFStatementResultTypeNormal,
	MFStatementResultTypeReturn,
	MFStatementResultTypeBreak,
	MFStatementResultTypeContinue,
};

@interface MFStatementResult : NSObject
@property (assign, nonatomic) MFStatementResultType type;
@property (strong, nonatomic) MFValue *reutrnValue;
+ (instancetype)normalResult;
+ (instancetype)returnResult;
+ (instancetype)breakResult;
+ (instancetype)continueResult;
@end

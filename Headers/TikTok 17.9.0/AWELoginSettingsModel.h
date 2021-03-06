//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSString;

@interface AWELoginSettingsModel : AWEBaseApiModel
{
    unsigned long long _userLoginPlatform;
    NSString *_dialogTitle;
    NSString *_dialogContent;
    NSArray *_errorCodes;
    NSString *_leftBtnDialog;
    NSString *_rightBtnDialog;
    unsigned long long _leftJumpType;
    NSString *_leftJumpUrl;
    unsigned long long _rightJumpType;
    NSString *_rightJumpUrl;
    unsigned long long _jumpType;
    NSString *_jumpUrl;
    NSString *_btnDialog;
    unsigned long long _planType;
}

+ (id)userLoginPlatformJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long planType; // @synthesize planType=_planType;
@property(copy, nonatomic) NSString *btnDialog; // @synthesize btnDialog=_btnDialog;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) unsigned long long jumpType; // @synthesize jumpType=_jumpType;
@property(copy, nonatomic) NSString *rightJumpUrl; // @synthesize rightJumpUrl=_rightJumpUrl;
@property(nonatomic) unsigned long long rightJumpType; // @synthesize rightJumpType=_rightJumpType;
@property(copy, nonatomic) NSString *leftJumpUrl; // @synthesize leftJumpUrl=_leftJumpUrl;
@property(nonatomic) unsigned long long leftJumpType; // @synthesize leftJumpType=_leftJumpType;
@property(copy, nonatomic) NSString *rightBtnDialog; // @synthesize rightBtnDialog=_rightBtnDialog;
@property(copy, nonatomic) NSString *leftBtnDialog; // @synthesize leftBtnDialog=_leftBtnDialog;
@property(retain, nonatomic) NSArray *errorCodes; // @synthesize errorCodes=_errorCodes;
@property(copy, nonatomic) NSString *dialogContent; // @synthesize dialogContent=_dialogContent;
@property(copy, nonatomic) NSString *dialogTitle; // @synthesize dialogTitle=_dialogTitle;
@property(nonatomic) unsigned long long userLoginPlatform; // @synthesize userLoginPlatform=_userLoginPlatform;

@end


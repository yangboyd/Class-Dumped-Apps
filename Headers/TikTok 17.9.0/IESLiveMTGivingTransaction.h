//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESLiveUserModel, NSDictionary, NSNumber, RACCommand;

@interface IESLiveMTGivingTransaction : NSObject
{
    _Bool _isComboTransaction;
    _Bool _ended;
    id _domainObject;
    unsigned long long _groupCount;
    IESLiveUserModel *_toUser;
    unsigned long long _totalCount;
    unsigned long long _totalCost;
    NSDictionary *_giftInfo;
    NSNumber *_templateID;
    RACCommand *_sendCommand;
    RACCommand *_completeCommmand;
    unsigned long long _comboCount;
    unsigned long long _giftPosition;
    NSDictionary *_userInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool ended; // @synthesize ended=_ended;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) unsigned long long giftPosition; // @synthesize giftPosition=_giftPosition;
@property(nonatomic) unsigned long long comboCount; // @synthesize comboCount=_comboCount;
@property(retain, nonatomic) RACCommand *completeCommmand; // @synthesize completeCommmand=_completeCommmand;
@property(retain, nonatomic) RACCommand *sendCommand; // @synthesize sendCommand=_sendCommand;
@property(retain, nonatomic) NSNumber *templateID; // @synthesize templateID=_templateID;
@property(retain, nonatomic) NSDictionary *giftInfo; // @synthesize giftInfo=_giftInfo;
@property(nonatomic) unsigned long long totalCost; // @synthesize totalCost=_totalCost;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) _Bool isComboTransaction; // @synthesize isComboTransaction=_isComboTransaction;
@property(retain, nonatomic) IESLiveUserModel *toUser; // @synthesize toUser=_toUser;
@property(nonatomic) unsigned long long groupCount; // @synthesize groupCount=_groupCount;
@property(retain, nonatomic) id domainObject; // @synthesize domainObject=_domainObject;
- (void)__endOnSendCompleted;
- (void)end;
- (void)increaseComboCount;
- (void)send;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSString;

@interface AWEUserRateRemindInfoModel : AWEBaseApiModel
{
    NSString *_remindText;
    NSString *_detailLink;
    long long _showDaysLimit;
    long long _showDetailCountLimit;
    long long _rateRecordId;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(nonatomic) long long rateRecordId; // @synthesize rateRecordId=_rateRecordId;
@property(nonatomic) long long showDetailCountLimit; // @synthesize showDetailCountLimit=_showDetailCountLimit;
@property(nonatomic) long long showDaysLimit; // @synthesize showDaysLimit=_showDaysLimit;
@property(copy, nonatomic) NSString *detailLink; // @synthesize detailLink=_detailLink;
@property(copy, nonatomic) NSString *remindText; // @synthesize remindText=_remindText;

@end


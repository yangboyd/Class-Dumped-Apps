//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEUserCertInfoModel;

@interface AWEUserVerificationResponseModel : AWEBaseApiModel
{
    int _certStatus;
    int _certingAction;
    int _denyAction;
    AWEUserCertInfoModel *_certInfo;
}

+ (id)intimateUsersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) AWEUserCertInfoModel *certInfo; // @synthesize certInfo=_certInfo;
@property(nonatomic) int denyAction; // @synthesize denyAction=_denyAction;
@property(nonatomic) int certingAction; // @synthesize certingAction=_certingAction;
@property(nonatomic) int certStatus; // @synthesize certStatus=_certStatus;

@end


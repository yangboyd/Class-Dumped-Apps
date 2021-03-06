//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface IESLiveVerifyCertificationModel : MTLModel <MTLJSONSerializing>
{
    _Bool _isVerified;
    _Bool _reviewing;
    int _certificationStep;
    int _hotsoonCertificationStatus;
    NSString *_certID;
    NSString *_realName;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(nonatomic) int hotsoonCertificationStatus; // @synthesize hotsoonCertificationStatus=_hotsoonCertificationStatus;
@property(copy, nonatomic) NSString *realName; // @synthesize realName=_realName;
@property(copy, nonatomic) NSString *certID; // @synthesize certID=_certID;
@property(nonatomic) int certificationStep; // @synthesize certificationStep=_certificationStep;
@property(nonatomic) _Bool reviewing; // @synthesize reviewing=_reviewing;
@property(nonatomic) _Bool isVerified; // @synthesize isVerified=_isVerified;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


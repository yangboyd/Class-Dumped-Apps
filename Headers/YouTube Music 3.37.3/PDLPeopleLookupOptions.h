//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PDLPeopleLookupOptions : NSObject
{
    _Bool _requiresServerExtendedData;
    _Bool _requiresEmailCertificate;
    _Bool _requiresEncodedProfileID;
    _Bool _exposeIdentityInfo;
    unsigned long long _photoSize;
    NSObject<OS_dispatch_queue> *_callbackDispatchQueue;
    long long _methodFieldMask;
    unsigned long long _dataProvenance;
}

+ (id)peopleOptionsFromPersonOptions:(id)arg1;
@property(nonatomic) unsigned long long dataProvenance; // @synthesize dataProvenance=_dataProvenance;
@property(nonatomic) long long methodFieldMask; // @synthesize methodFieldMask=_methodFieldMask;
@property(readonly, nonatomic) _Bool exposeIdentityInfo; // @synthesize exposeIdentityInfo=_exposeIdentityInfo;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackDispatchQueue; // @synthesize callbackDispatchQueue=_callbackDispatchQueue;
@property(readonly, nonatomic) _Bool requiresEncodedProfileID; // @synthesize requiresEncodedProfileID=_requiresEncodedProfileID;
@property(readonly, nonatomic) _Bool requiresEmailCertificate; // @synthesize requiresEmailCertificate=_requiresEmailCertificate;
@property(readonly, nonatomic) _Bool requiresServerExtendedData; // @synthesize requiresServerExtendedData=_requiresServerExtendedData;
@property(readonly, nonatomic) unsigned long long photoSize; // @synthesize photoSize=_photoSize;
- (void).cxx_destruct;
- (id)initWithBuilder:(id)arg1;

@end


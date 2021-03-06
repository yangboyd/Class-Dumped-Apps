//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <InstagramAppCoreFramework/THAPIRequest-Protocol.h>

@class NSDictionary, NSString, THStatusCreationModel;

@interface THStatusAPIRequest : FBIvarBasedEqualityObject <THAPIRequest>
{
    unsigned long long _subtype;
    THStatusCreationModel *_setStatus_model;
}

+ (id)setStatusWithModel:(id)arg1;
+ (id)getStatuses;
+ (id)clearStatus;
- (void).cxx_destruct;
- (long long)matchIntegerGetStatuses:(CDUnknownBlockType)arg1 setStatus:(CDUnknownBlockType)arg2 clearStatus:(CDUnknownBlockType)arg3;
- (void)matchGetStatuses:(CDUnknownBlockType)arg1 setStatus:(CDUnknownBlockType)arg2 clearStatus:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool shouldSignRequest;
@property(readonly, nonatomic) CDUnknownBlockType parsingHandler;
@property(readonly, nonatomic) NSDictionary *rawParameters;
@property(readonly, nonatomic) NSDictionary *parameters;
@property(readonly, nonatomic) NSString *path;
@property(readonly, nonatomic) unsigned long long httpMethod;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/RKMappingOperationDataSource-Protocol.h>

@class NSString;

@interface RKObjectMappingOperationDataSource : NSObject <RKMappingOperationDataSource>
{
}

- (_Bool)mappingOperationShouldSetUnchangedValues:(id)arg1;
- (_Bool)mappingOperationShouldCollectMappingInfo:(id)arg1;
- (id)mappingOperation:(id)arg1 targetObjectForMapping:(id)arg2 inRelationship:(id)arg3;
- (id)mappingOperation:(id)arg1 targetObjectForRepresentation:(id)arg2 withMapping:(id)arg3 inRelationship:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


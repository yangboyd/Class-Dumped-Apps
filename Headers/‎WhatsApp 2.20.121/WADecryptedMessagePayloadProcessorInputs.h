//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, WADecryptedMessagePayloadProcessorDependencies;

@interface WADecryptedMessagePayloadProcessorInputs : NSObject
{
    NSDictionary *_uniqueKeyToPreExistingMessage;
    NSDictionary *_revokedMessageSignals;
    NSArray *_newlyCreatedMessages;
    NSDictionary *_existingStatusChangeRequests;
    WADecryptedMessagePayloadProcessorDependencies *_dependencies;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WADecryptedMessagePayloadProcessorDependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(readonly, nonatomic) NSDictionary *existingStatusChangeRequests; // @synthesize existingStatusChangeRequests=_existingStatusChangeRequests;
@property(readonly, nonatomic) NSArray *newlyCreatedMessages; // @synthesize newlyCreatedMessages=_newlyCreatedMessages;
@property(readonly, nonatomic) NSDictionary *revokedMessageSignals; // @synthesize revokedMessageSignals=_revokedMessageSignals;
@property(readonly, nonatomic) NSDictionary *uniqueKeyToPreExistingMessage; // @synthesize uniqueKeyToPreExistingMessage=_uniqueKeyToPreExistingMessage;
- (id)initWithPreExistingMessages:(id)arg1 revokedMessageSignals:(id)arg2 newlyCreatedMessages:(id)arg3 existingStatusChangeRequests:(id)arg4 dependencies:(id)arg5;

@end


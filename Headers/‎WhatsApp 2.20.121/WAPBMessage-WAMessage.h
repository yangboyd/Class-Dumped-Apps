//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAPBMessage.h>

@interface WAPBMessage (WAMessage)
+ (CDStruct_237d80d8)updateWAMessage:(id)arg1 usingDataFromProtobuf:(id)arg2;
+ (void)updateEphemeralMetadataFromMessageIfNeeded:(id)arg1 messageMetadata:(id)arg2 contextInfo:(id *)arg3;
+ (_Bool)contextInfoContainsEphemeralDuration:(id)arg1;
+ (id)wrappedEphemeralMessageProtobufFromProtobufMessage:(id)arg1;
+ (_Bool)shouldFutureproofBroadcastMessage:(id)arg1;
+ (id)futureproofMessageForEphemeralFeatureIfNeeded:(id)arg1 protobufMessage:(id)arg2 contextInfo:(id)arg3;
+ (id)protobufMessageFromWAMessage:(id)arg1 includeReplyContext:(_Bool)arg2 fullSize:(_Bool)arg3 forWebClient:(_Bool)arg4;
+ (id)protobufMessageFromWAMessage:(id)arg1 includeReplyContext:(_Bool)arg2 forWebClient:(_Bool)arg3;
+ (id)protobufMessageFromWAMessage:(id)arg1;
+ (void)populateImageMessage:(id)arg1 fromWAMessage:(id)arg2 mediaInfoContainer:(id)arg3 contextInfo:(id)arg4 thumbnail:(id)arg5 forWebClient:(_Bool)arg6;
- (void)trimFieldsNotNeededForWebNotifications;
@end


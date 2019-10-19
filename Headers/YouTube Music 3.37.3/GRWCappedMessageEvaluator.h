//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSPredicate;
@protocol OS_dispatch_queue;

@interface GRWCappedMessageEvaluator : NSObject
{
    NSMutableSet *_messagesSet;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSPredicate *_cappedMessageValidationPredicate;
}

@property(retain, nonatomic) NSPredicate *cappedMessageValidationPredicate; // @synthesize cappedMessageValidationPredicate=_cappedMessageValidationPredicate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSMutableSet *messagesSet; // @synthesize messagesSet=_messagesSet;
- (void).cxx_destruct;
- (void)removeAllMessages;
- (_Bool)isValidCappedMessage:(id)arg1;
- (void)updateStoredSet;
- (id)allCappedMessages;
- (id)internalFindCappedMessageWithImpressionCappingID:(id)arg1;
- (id)cappedMessageWithImpressionCappingID:(id)arg1;
- (void)addCappedMessage:(id)arg1;
- (void)addCappedMessages:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Awarding, Message, NSString;

@interface _TtC6Reddit17ReportableMessage : NSObject
{
    // Error parsing type: , name: wrappedMessage
    // Error parsing type: , name: awarding
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithMessage:(id)arg1 awarding:(id)arg2;
@property(nonatomic, readonly) Awarding *awarding; // @synthesize awarding;
@property(nonatomic, readonly) Message *wrappedMessage; // @synthesize wrappedMessage;
@property(nonatomic, readonly) NSString *subreddit;
@property(nonatomic, readonly) _Bool canBeBlocked;
@property(nonatomic, readonly) _Bool canBeReported;
@property(nonatomic, readonly) NSString *author;
@property(nonatomic, readonly) NSString *sharingPermalinkIncludingDomain;
@property(nonatomic, readonly) NSString *pk;

@end


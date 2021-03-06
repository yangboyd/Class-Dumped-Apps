//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class A9VSFezMessage, NSDate, NSMutableOrderedSet, NSTimer;
@protocol A9VSFezMessageBoardDelegate;

@interface A9VSFezMessageBoard : NSObject
{
    A9VSFezMessage *_displayedMessage;
    id <A9VSFezMessageBoardDelegate> _delegate;
    NSMutableOrderedSet *_messages;
    NSTimer *_displayedMessageTimer;
    NSDate *_messageDisplayedTime;
}

@property(retain, nonatomic) NSDate *messageDisplayedTime; // @synthesize messageDisplayedTime=_messageDisplayedTime;
@property(retain, nonatomic) NSTimer *displayedMessageTimer; // @synthesize displayedMessageTimer=_displayedMessageTimer;
@property(readonly, nonatomic) NSMutableOrderedSet *messages; // @synthesize messages=_messages;
@property(nonatomic) __weak id <A9VSFezMessageBoardDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) A9VSFezMessage *displayedMessage; // @synthesize displayedMessage=_displayedMessage;
- (void).cxx_destruct;
- (void)updateDisplayMessageTimer;
- (void)update;
- (void)removeMessagesOfTypes:(unsigned long long)arg1;
- (void)addMessages:(id)arg1;
- (void)addMessage:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WAContactsSection : NSObject
{
    NSString *_title;
    NSArray *_contacts;
    NSArray *_chatSessions;
    long long _numberOfContacts;
    long long _numberOfChatSessions;
}

- (void).cxx_destruct;
@property(nonatomic) long long numberOfChatSessions; // @synthesize numberOfChatSessions=_numberOfChatSessions;
@property(nonatomic) long long numberOfContacts; // @synthesize numberOfContacts=_numberOfContacts;
@property(copy, nonatomic) NSArray *chatSessions; // @synthesize chatSessions=_chatSessions;
@property(copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1;

@end


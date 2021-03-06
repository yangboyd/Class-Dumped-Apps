//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/FNROContentSpecial.h>

@class IFProjectElementStorage, NSArray, NSNumber, NSString;

@interface FNROProjectElement : FNROContentSpecial
{
    NSString *_subtype;
    NSNumber *_show_in_session_rate;
    NSNumber *_priority;
    NSArray *_users;
    NSArray *_chats;
    NSArray *_chats_v2;
    NSArray *_channels;
    NSArray *_comments;
    IFProjectElementStorage *_storage;
}

+ (id)objectMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) IFProjectElementStorage *storage; // @synthesize storage=_storage;
@property(copy, nonatomic) NSArray *comments; // @synthesize comments=_comments;
@property(copy, nonatomic) NSArray *channels; // @synthesize channels=_channels;
@property(copy, nonatomic) NSArray *chats_v2; // @synthesize chats_v2=_chats_v2;
@property(copy, nonatomic) NSArray *chats; // @synthesize chats=_chats;
@property(copy, nonatomic) NSArray *users; // @synthesize users=_users;
@property(retain, nonatomic) NSNumber *priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSNumber *show_in_session_rate; // @synthesize show_in_session_rate=_show_in_session_rate;
@property(copy, nonatomic) NSString *subtype; // @synthesize subtype=_subtype;
- (id)type;

@end


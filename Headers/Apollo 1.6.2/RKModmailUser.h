//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSDate, NSString, RKModmailBanStatus, RKModmailMuteStatus;

@interface RKModmailUser : MTLModel <MTLJSONSerializing>
{
    _Bool _isShadowBanned;
    _Bool _isSuspended;
    RKModmailBanStatus *_banStatus;
    NSDate *_created;
    NSString *_identifier;
    RKModmailMuteStatus *_muteStatus;
    NSString *_name;
    NSArray *_recentComments;
    NSArray *_recentConvos;
    NSArray *_recentPosts;
}

+ (id)muteStatusJSONTransformer;
+ (id)banStatusJSONTransformer;
+ (id)createdJSONTransformer;
+ (id)recentConvosJSONTransformer;
+ (id)recentCommentsJSONTransformer;
+ (id)recentPostsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *recentPosts; // @synthesize recentPosts=_recentPosts;
@property(retain, nonatomic) NSArray *recentConvos; // @synthesize recentConvos=_recentConvos;
@property(retain, nonatomic) NSArray *recentComments; // @synthesize recentComments=_recentComments;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) RKModmailMuteStatus *muteStatus; // @synthesize muteStatus=_muteStatus;
@property(nonatomic) _Bool isSuspended; // @synthesize isSuspended=_isSuspended;
@property(nonatomic) _Bool isShadowBanned; // @synthesize isShadowBanned=_isShadowBanned;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSDate *created; // @synthesize created=_created;
@property(retain, nonatomic) RKModmailBanStatus *banStatus; // @synthesize banStatus=_banStatus;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


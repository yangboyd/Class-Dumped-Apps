//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFNetworkResponseMappable-Protocol.h>

@class FNROUser, NSNumber, NSString;

@interface FNROCommentUserMention : NSObject <IFNetworkResponseMappable>
{
    NSString *_ID;
    NSString *_user_id;
    NSString *_nick;
    NSNumber *_start_index;
    NSNumber *_stop_index;
    FNROUser *_user;
}

+ (id)objectMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) FNROUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NSNumber *stop_index; // @synthesize stop_index=_stop_index;
@property(retain, nonatomic) NSNumber *start_index; // @synthesize start_index=_start_index;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(copy, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(readonly, nonatomic) struct _NSRange range;

@end


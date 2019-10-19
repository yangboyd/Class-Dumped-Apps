//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSNumber, NSString;

@interface SCImpalaViewer : SCComposerMarshallableObject
{
    NSString *_displayName;
    NSString *_userId;
    NSString *_username;
    double _viewTimestamp;
    NSString *_imageUrl;
    NSString *_avatarId;
    NSString *_selfieId;
    NSNumber *_isVerified;
}

@property(retain, nonatomic) NSNumber *isVerified; // @synthesize isVerified=_isVerified;
@property(copy, nonatomic) NSString *selfieId; // @synthesize selfieId=_selfieId;
@property(copy, nonatomic) NSString *avatarId; // @synthesize avatarId=_avatarId;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) double viewTimestamp; // @synthesize viewTimestamp=_viewTimestamp;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithDisplayName:(id)arg1 userId:(id)arg2 username:(id)arg3 viewTimestamp:(double)arg4 imageUrl:(id)arg5 avatarId:(id)arg6 selfieId:(id)arg7 isVerified:(id)arg8;

@end


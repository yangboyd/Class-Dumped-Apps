//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTEditDynamicStickerViewModel.h>

#import <Module_Framework/NSCoding-Protocol.h>

@class NSString, YTIThumbnailDetails;

@interface YTEditUserMentionStickerViewModel : YTEditDynamicStickerViewModel <NSCoding>
{
    NSString *_userMentionTitle;
    NSString *_channelID;
    YTIThumbnailDetails *_avatarThumbnail;
}

@property(retain, nonatomic) YTIThumbnailDetails *avatarThumbnail; // @synthesize avatarThumbnail=_avatarThumbnail;
@property(copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(copy, nonatomic) NSString *userMentionTitle; // @synthesize userMentionTitle=_userMentionTitle;
- (void).cxx_destruct;
- (long long)stickerType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGInstantPageBlock.h>

@class TGRichText;

@interface TGInstantPageBlockAudio : TGInstantPageBlock
{
    long long _audioId;
    TGRichText *_caption;
}

@property(readonly, nonatomic) TGRichText *caption; // @synthesize caption=_caption;
@property(readonly, nonatomic) long long audioId; // @synthesize audioId=_audioId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAudioId:(long long)arg1 caption:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCOperaVideoControlsViewModel : NSObject <NSCopying>
{
    _Bool _showPlayButton;
    _Bool _showCaptionButton;
    _Bool _showAudioButton;
    _Bool _showRotateButton;
    double _progress;
}

@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) _Bool showRotateButton; // @synthesize showRotateButton=_showRotateButton;
@property(readonly, nonatomic) _Bool showAudioButton; // @synthesize showAudioButton=_showAudioButton;
@property(readonly, nonatomic) _Bool showCaptionButton; // @synthesize showCaptionButton=_showCaptionButton;
@property(readonly, nonatomic) _Bool showPlayButton; // @synthesize showPlayButton=_showPlayButton;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShowPlayButton:(_Bool)arg1 showCaptionButton:(_Bool)arg2 showAudioButton:(_Bool)arg3 showRotateButton:(_Bool)arg4 progress:(double)arg5;

@end


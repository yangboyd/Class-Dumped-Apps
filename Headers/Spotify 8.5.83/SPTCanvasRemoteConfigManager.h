//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTCanvasRemoteConfigManager : NSObject
{
    _Bool _canvasNoCacheEnabled;
    _Bool _canvasPlaylistEnabled;
    _Bool _canvasPreviewEnabled;
    _Bool _canvasAbSettingsEnabled;
    _Bool _canvasAbTapEnabled;
    _Bool _canvasAbToggleEnabled;
    _Bool _canvasAbBlankToggleEnabled;
    _Bool _canvasEnabled;
}

@property(readonly, nonatomic, getter=isCanvasEnabled) _Bool canvasEnabled; // @synthesize canvasEnabled=_canvasEnabled;
@property(readonly, nonatomic, getter=isCanvasAbBlankToggleEnabled) _Bool canvasAbBlankToggleEnabled; // @synthesize canvasAbBlankToggleEnabled=_canvasAbBlankToggleEnabled;
@property(readonly, nonatomic, getter=isCanvasAbToggleEnabled) _Bool canvasAbToggleEnabled; // @synthesize canvasAbToggleEnabled=_canvasAbToggleEnabled;
@property(readonly, nonatomic, getter=isCanvasAbTapEnabled) _Bool canvasAbTapEnabled; // @synthesize canvasAbTapEnabled=_canvasAbTapEnabled;
@property(readonly, nonatomic, getter=isCanvasAbSettingsEnabled) _Bool canvasAbSettingsEnabled; // @synthesize canvasAbSettingsEnabled=_canvasAbSettingsEnabled;
@property(readonly, nonatomic, getter=isCanvasPreviewEnabled) _Bool canvasPreviewEnabled; // @synthesize canvasPreviewEnabled=_canvasPreviewEnabled;
@property(readonly, nonatomic, getter=isCanvasPlaylistEnabled) _Bool canvasPlaylistEnabled; // @synthesize canvasPlaylistEnabled=_canvasPlaylistEnabled;
@property(readonly, nonatomic, getter=isCanvasNoCacheEnabled) _Bool canvasNoCacheEnabled; // @synthesize canvasNoCacheEnabled=_canvasNoCacheEnabled;
- (id)initWithRemoteConfigProperties:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FOAStickerProvider;

@interface FOAPollStickerProvider : NSObject
{
    FOAStickerProvider *_provider;
    FOAStickerProvider *_modelProvider;
    CDUnknownBlockType _disableGradienOnLabelBlock;
    CDUnknownBlockType _foaTextViewTypeBlock;
    CDUnknownBlockType _fontWithSizeBlock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType fontWithSizeBlock; // @synthesize fontWithSizeBlock=_fontWithSizeBlock;
@property(readonly, nonatomic) CDUnknownBlockType foaTextViewTypeBlock; // @synthesize foaTextViewTypeBlock=_foaTextViewTypeBlock;
@property(readonly, nonatomic) CDUnknownBlockType disableGradienOnLabelBlock; // @synthesize disableGradienOnLabelBlock=_disableGradienOnLabelBlock;
@property(retain, nonatomic) FOAStickerProvider *modelProvider; // @synthesize modelProvider=_modelProvider;
@property(readonly, nonatomic) FOAStickerProvider *provider; // @synthesize provider=_provider;
- (id)getModelProvider;
- (id)initWithProvider:(id)arg1 disableGradienOnLabelBlock:(CDUnknownBlockType)arg2 foaTextViewTypeBlock:(CDUnknownBlockType)arg3 fontWithSizeBlock:(CDUnknownBlockType)arg4;

@end


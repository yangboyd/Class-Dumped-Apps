//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SOJUSticker;
@protocol SCBloopsChatMediaContentProvider;

@protocol SCChatInputStickerAccessorySender <NSObject>
- (void)sendBloop:(id <SCBloopsChatMediaContentProvider>)arg1 fromCategory:(NSString *)arg2 fromPosition:(unsigned long long)arg3 fromFullscreen:(_Bool)arg4 fromSource:(long long)arg5;
- (void)sendSticker:(SOJUSticker *)arg1 fromPack:(NSString *)arg2 fromPosition:(unsigned long long)arg3 fromSource:(long long)arg4;
@end


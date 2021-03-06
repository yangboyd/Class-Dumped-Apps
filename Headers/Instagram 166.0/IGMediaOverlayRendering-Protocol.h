//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@protocol IGContentGateableMediaItem, IGMediaOverlayDelegate;

@protocol IGMediaOverlayRendering <NSObject>
+ (double)bannerHeightForMediaItem:(id <IGContentGateableMediaItem>)arg1 width:(double)arg2;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) __weak id <IGMediaOverlayDelegate> delegate;
- (void)configureWithMediaItem:(id <IGContentGateableMediaItem>)arg1 renderType:(unsigned long long)arg2;
- (void)configureWithMediaItem:(id <IGContentGateableMediaItem>)arg1 renderType:(unsigned long long)arg2 cornerRadius:(double)arg3;
- (void)configureWithMediaItem:(id <IGContentGateableMediaItem>)arg1 renderType:(unsigned long long)arg2 cornerRadius:(double)arg3 insets:(struct UIEdgeInsets)arg4;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

#import <TelegramUI/TGMediaEditableItem-Protocol.h>
#import <TelegramUI/TGMediaSelectableItem-Protocol.h>

@class NSString;

@interface UIImage (Preloading) <TGMediaSelectableItem, TGMediaEditableItem>
- (struct CGSize)pixelSize;
- (struct CGSize)screenSize;
- (id)mediumImage;
- (void)setMediumImage:(id)arg1;
- (void)tgPreload;
- (id)preloadedImageWithAlpha;
- (id)preloadedImage;
- (void)setFromCloud:(_Bool)arg1;
- (_Bool)fromCloud;
- (void)setEdited:(_Bool)arg1;
- (_Bool)edited;
- (void)setDegraded:(_Bool)arg1;
- (_Bool)degraded;
- (void)setExtendedEdgeInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)extendedEdgeInsets;
- (void)setStaticBackdropImageData:(id)arg1;
- (id)staticBackdropImageData;
- (void)setAttachmentsFromDictionary:(id)arg1;
- (id)attachmentsDictionary;
- (id)originalImageSignal:(double)arg1;
- (id)screenImageSignal:(double)arg1;
- (id)thumbnailImageSignal;
@property(readonly, nonatomic) struct CGSize originalSize;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) _Bool isVideo;
- (id)initWithBundleImageName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double originalDuration;
@property(readonly) Class superclass;
@end


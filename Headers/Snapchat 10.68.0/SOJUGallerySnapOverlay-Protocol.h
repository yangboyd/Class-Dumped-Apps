//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUGalleryBounceState, SOJUGalleryCaption, SOJUGalleryCropping, SOJUGalleryDrawing, SOJUGalleryDrawingV2, SOJUGalleryEraser, SOJUGalleryFilters, SOJUGalleryMagicMomentState, SOJUGalleryMagicTools;

@protocol SOJUGallerySnapOverlay <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *lensMetadata;
@property(readonly, copy, nonatomic) SOJUGalleryMagicMomentState *magicMoment;
@property(readonly, copy, nonatomic) NSString *friendBitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *userBitmojiAvatarId;
@property(readonly, copy, nonatomic) SOJUGalleryBounceState *bounceState;
@property(readonly, copy, nonatomic) NSString *previewLensId;
@property(readonly, copy, nonatomic) NSString *craftType;
@property(readonly, copy, nonatomic) NSArray *captions;
@property(readonly, copy, nonatomic) SOJUGalleryCropping *cropping;
@property(readonly, copy, nonatomic) NSString *audiofilterStyleId;
@property(readonly, copy, nonatomic) SOJUGalleryMagicTools *magicTools;
@property(readonly, copy, nonatomic) SOJUGalleryEraser *eraser;
@property(readonly, copy, nonatomic) NSArray *snapAttachments;
@property(readonly, copy, nonatomic) NSString *snapcraftStyleId;
@property(readonly, copy, nonatomic) NSNumber *audioDisabled;
@property(readonly, copy, nonatomic) NSString *lensId;
@property(readonly, copy, nonatomic) NSArray *stickers;
@property(readonly, copy, nonatomic) SOJUGalleryDrawingV2 *drawingV2;
@property(readonly, copy, nonatomic) SOJUGalleryDrawing *drawing;
@property(readonly, copy, nonatomic) SOJUGalleryCaption *caption;
@property(readonly, copy, nonatomic) SOJUGalleryFilters *filters;
@end


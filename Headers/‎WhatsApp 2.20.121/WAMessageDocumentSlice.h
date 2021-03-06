//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSlice.h"

@class NSLayoutManager, NSString, NSTextContainer, NSTextStorage;

@interface WAMessageDocumentSlice : WAMessageContainerSlice
{
    NSString *_MIMEType;
    NSString *_fileExtension;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    struct CGRect _textRect;
    NSTextStorage *_iconTextStorage;
    NSTextContainer *_iconTextContainer;
    NSLayoutManager *_iconLayoutManager;
    struct CGRect _iconTextRect;
    _Bool _hasThumbnail;
    _Bool _mayShowProgressView;
    double _metadataSectionHeight;
}

+ (Class)viewClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) double metadataSectionHeight; // @synthesize metadataSectionHeight=_metadataSectionHeight;
@property(readonly, nonatomic) _Bool mayShowProgressView; // @synthesize mayShowProgressView=_mayShowProgressView;
@property(readonly, nonatomic) _Bool hasThumbnail; // @synthesize hasThumbnail=_hasThumbnail;
@property(readonly, nonatomic) NSString *iconImageName;
- (void)drawMetadataInCurrentContext;
- (void)internalFitToWidth:(double)arg1;
- (_Bool)showsMedia;
- (id)initWithMessages:(id)arg1 metrics:(id)arg2;

@end


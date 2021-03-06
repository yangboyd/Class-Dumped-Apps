//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL, VASVASTClicks, VASVASTStaticResource;

@interface VASVASTCompanion : NSObject
{
    _Bool _hideButtons;
    NSString *_identifier;
    VASVASTStaticResource *_staticResource;
    NSURL *_iframeResource;
    NSURL *_htmlResource;
    VASVASTClicks *_companionClick;
    NSArray *_trackingEvents;
    struct CGSize _size;
    struct CGSize _assetSize;
}

- (void).cxx_destruct;
@property _Bool hideButtons; // @synthesize hideButtons=_hideButtons;
@property(retain) NSArray *trackingEvents; // @synthesize trackingEvents=_trackingEvents;
@property(retain) VASVASTClicks *companionClick; // @synthesize companionClick=_companionClick;
@property(copy) NSURL *htmlResource; // @synthesize htmlResource=_htmlResource;
@property(copy) NSURL *iframeResource; // @synthesize iframeResource=_iframeResource;
@property(retain) VASVASTStaticResource *staticResource; // @synthesize staticResource=_staticResource;
@property struct CGSize assetSize; // @synthesize assetSize=_assetSize;
@property struct CGSize size; // @synthesize size=_size;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 size:(struct CGSize)arg2 assetSize:(struct CGSize)arg3 hideButtons:(_Bool)arg4;

@end


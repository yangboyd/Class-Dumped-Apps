//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKFileCVOConfiguring-Protocol.h"

@class GDKTheme, NSMapTable, NSString;

@interface GDAUploadCVOConfiguration : NSObject <GDKFileCVOConfiguring>
{
    GDKTheme *_theme;
    NSMapTable *_displayedViewObjects;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMapTable *displayedViewObjects; // @synthesize displayedViewObjects=_displayedViewObjects;
@property(readonly, nonatomic) GDKTheme *theme; // @synthesize theme=_theme;
- (void)updateFileTypeImagesForCVO:(id)arg1 withFile:(id)arg2;
- (void)asyncSetThumbnail:(id)arg1 onViewObject:(id)arg2;
- (void)cleanupViewObjectAfterDisplay:(id)arg1 withFile:(id)arg2;
- (void)prepareViewObjectForDisplay:(id)arg1 withFile:(id)arg2 forSort:(id)arg3;
- (void)updateViewObject:(id)arg1 withFile:(id)arg2 forSort:(id)arg3 loadImages:(_Bool)arg4;
- (void)updateViewObject:(id)arg1 withFile:(id)arg2 forSort:(id)arg3;
- (id)viewObjectForFile:(id)arg1 forSort:(id)arg2 actionDelegate:(id)arg3 dragSessionManager:(id)arg4;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


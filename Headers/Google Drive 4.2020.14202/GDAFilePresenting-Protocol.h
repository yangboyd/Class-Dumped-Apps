//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDKFilePresenting-Protocol.h"

@class GDAActionPanelContext, UIView;
@protocol GDKFile, GDKFileListing;

@protocol GDAFilePresenting <GDKFilePresenting>
- (_Bool)fileWasSelected:(id <GDKFile>)arg1 fromView:(UIView *)arg2 withFileList:(id <GDKFileListing>)arg3 actionPanelContext:(GDAActionPanelContext *)arg4;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CategoryLog;

@interface Slogger : NSObject
{
    CategoryLog *_app;
    CategoryLog *_data;
    CategoryLog *_displayPage;
    CategoryLog *_downloads;
    CategoryLog *_images;
    CategoryLog *_interactive;
    CategoryLog *_logging;
    CategoryLog *_lolomo;
    CategoryLog *_networking;
    CategoryLog *_playback;
    CategoryLog *_postPlay;
    CategoryLog *_smartDownloads;
    CategoryLog *_extras;
    CategoryLog *_falcor;
    CategoryLog *_localization;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CategoryLog *localization; // @synthesize localization=_localization;
@property(retain, nonatomic) CategoryLog *falcor; // @synthesize falcor=_falcor;
@property(retain, nonatomic) CategoryLog *extras; // @synthesize extras=_extras;
@property(retain, nonatomic) CategoryLog *smartDownloads; // @synthesize smartDownloads=_smartDownloads;
@property(retain, nonatomic) CategoryLog *postPlay; // @synthesize postPlay=_postPlay;
@property(retain, nonatomic) CategoryLog *playback; // @synthesize playback=_playback;
@property(retain, nonatomic) CategoryLog *networking; // @synthesize networking=_networking;
@property(retain, nonatomic) CategoryLog *lolomo; // @synthesize lolomo=_lolomo;
@property(retain, nonatomic) CategoryLog *logging; // @synthesize logging=_logging;
@property(retain, nonatomic) CategoryLog *interactive; // @synthesize interactive=_interactive;
@property(retain, nonatomic) CategoryLog *images; // @synthesize images=_images;
@property(retain, nonatomic) CategoryLog *downloads; // @synthesize downloads=_downloads;
@property(retain, nonatomic) CategoryLog *displayPage; // @synthesize displayPage=_displayPage;
@property(retain, nonatomic) CategoryLog *data; // @synthesize data=_data;
@property(retain, nonatomic) CategoryLog *app; // @synthesize app=_app;
- (void).cxx_destruct;
- (id)createCategoryLogWithName:(id)arg1;
- (void)initializeCategoryLogs;

@end


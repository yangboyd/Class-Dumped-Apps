//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTEditPlaylistLogger, SPTPopupManager;

@interface SPTEditPlaylistConfirmCancelPresenter : NSObject
{
    SPTPopupManager *_popupManager;
    SPTEditPlaylistLogger *_logger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTEditPlaylistLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPopupManager:(id)arg1 logger:(id)arg2;

@end


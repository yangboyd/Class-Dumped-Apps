//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FeedPresenter.h"

@class TheatrePresentationModel;

@interface TheatreFeedPresenter : FeedPresenter
{
    _Bool _isRichTextTheatreView;
    TheatrePresentationModel *_presentationModel;
}

@property(nonatomic) _Bool isRichTextTheatreView; // @synthesize isRichTextTheatreView=_isRichTextTheatreView;
@property(retain, nonatomic) TheatrePresentationModel *presentationModel; // @synthesize presentationModel=_presentationModel;
- (void).cxx_destruct;
- (void)didHidePost:(id)arg1;
- (id)feedPostOptions;
- (void)updateCurrentObjectsWithNetworkSource:(id)arg1;
- (void)reloadContentFromNetworkSource;
- (_Bool)shouldShowInitialPreviewTheatreMediaItem:(id)arg1;
- (_Bool)shouldForceUnblurTheatreMediaItem:(id)arg1;
- (id)mediaCurrentPostForIndex:(id)arg1;
- (id)mediaCurrentModelForIndex:(id)arg1;
- (id)initWithService:(id)arg1 presentationModel:(id)arg2;

@end


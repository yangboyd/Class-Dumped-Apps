//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTVocalRemovalMenuButtonViewModelDelegate;

@interface SPTVocalRemovalMenuButtonViewModel : NSObject
{
    id <SPTVocalRemovalMenuButtonViewModelDelegate> _delegate;
}

@property(nonatomic) __weak id <SPTVocalRemovalMenuButtonViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedFeedbackString;
@property(readonly, nonatomic) NSString *localizedVolumeDownString;
@property(readonly, nonatomic) NSString *localizedVolumeUpString;

@end


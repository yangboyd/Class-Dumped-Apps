//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGDirectSaveMediaDelegate;

@interface IGDirectSaveMediaObserver : NSObject
{
    id <IGDirectSaveMediaDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectSaveMediaDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_writeVideoToCameraRoll:(id)arg1 isVideo:(_Bool)arg2;
- (void)didLoadImage:(id)arg1;
- (void)didLoadMediaData:(id)arg1 isVideo:(_Bool)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol GAVBlocosManagerDelegate, GDKFile;

@protocol GAVBlocosManager <NSObject>
@property(retain, nonatomic) id <GDKFile> currentCommentFile;
@property(nonatomic) __weak id <GAVBlocosManagerDelegate> delegate;
- (void)showCommentWithDiscussionID:(NSString *)arg1;
- (void)showCommentWithAnchorID:(NSString *)arg1;
- (void)composeDiscussionWithAnchorID:(NSString *)arg1;
- (void)setReadyForDocosView:(_Bool)arg1;
- (void)syncDocos;
- (_Bool)isDocosViewVisible;
- (void)dismissDocosView;
- (void)commentButtonTapped;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BulletLynxViewProvider, BulletRNViewProvider, BulletTimorViewPovider, BulletWebViewProvider;

@interface BulletViewProvider : NSObject
{
    BulletWebViewProvider *_webViewProvider;
    BulletRNViewProvider *_rnProvider;
    BulletTimorViewPovider *_timorProvider;
    BulletLynxViewProvider *_lynxProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BulletLynxViewProvider *lynxProvider; // @synthesize lynxProvider=_lynxProvider;
@property(retain, nonatomic) BulletTimorViewPovider *timorProvider; // @synthesize timorProvider=_timorProvider;
@property(retain, nonatomic) BulletRNViewProvider *rnProvider; // @synthesize rnProvider=_rnProvider;
@property(retain, nonatomic) BulletWebViewProvider *webViewProvider; // @synthesize webViewProvider=_webViewProvider;

@end


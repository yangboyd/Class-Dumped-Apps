//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDACreateProvider, GDKFileIDResourceKeyPair;
@protocol GDKFile;

@protocol GDACreateProviderDelegate <NSObject>
@property(readonly, nonatomic) GDKFileIDResourceKeyPair *displayedFolderIDResourceKeyPair;
- (void)createProvider:(GDACreateProvider *)arg1 didCreateFolder:(id <GDKFile>)arg2;
@end


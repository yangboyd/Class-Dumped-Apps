//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDLImageLoaderProtocol-Protocol.h"

@class BDLynxBundle, NSArray, NSString, NSURL;

@interface BDLynxImageLoader : NSObject <BDLImageLoaderProtocol>
{
    NSString *_cardID;
    BDLynxBundle *_bundle;
    NSArray *_extURLPrefix;
    NSURL *_extDirRoot;
}

@property(retain) NSURL *extDirRoot; // @synthesize extDirRoot=_extDirRoot;
@property(retain) NSArray *extURLPrefix; // @synthesize extURLPrefix=_extURLPrefix;
@property(retain) BDLynxBundle *bundle; // @synthesize bundle=_bundle;
@property(retain) NSString *cardID; // @synthesize cardID=_cardID;
- (void).cxx_destruct;
- (void)requestImage:(id)arg1 size:(struct CGSize)arg2 complete:(CDUnknownBlockType)arg3;
- (_Bool)canRequestURL:(id)arg1;
- (id)initWithTemplateConfig:(id)arg1;
- (id)initWithBundle:(id)arg1 cardID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RDCCBundledFileDataConfig-Protocol.h"

@class NSString;

@interface ANPNavMenuRDCBundledConfig : NSObject <RDCCBundledFileDataConfig>
{
    NSString *_bundledFileFormat;
}

@property(retain, nonatomic) NSString *bundledFileFormat; // @synthesize bundledFileFormat=_bundledFileFormat;
- (void).cxx_destruct;
- (id)getBundledFileName:(id)arg1 locale:(id)arg2;
- (id)bundledFileLocation;
- (id)initWithBundledFileFormat:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


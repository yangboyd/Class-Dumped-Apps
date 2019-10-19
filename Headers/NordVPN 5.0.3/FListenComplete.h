//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FOperation-Protocol.h"

@class FOperationSource, FPath, NSString;

@interface FListenComplete : NSObject <FOperation>
{
    FOperationSource *_source;
    FPath *_path;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) FPath *path; // @synthesize path=_path;
@property(retain, nonatomic) FOperationSource *source; // @synthesize source=_source;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)operationForChild:(id)arg1;
- (id)initWithSource:(id)arg1 path:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


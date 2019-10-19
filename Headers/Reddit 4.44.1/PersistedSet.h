//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PersistedSet : NSObject
{
    NSString *_directoryPath;
}

@property(readonly, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)archiveDirectory;
- (id)objectFileNames;
@property(readonly, nonatomic) unsigned long long count;
- (_Bool)discardAll;
- (_Bool)removeObjectWithUUID:(id)arg1;
- (id)retrieveObjectWithUUID:(id)arg1;
- (id)removeObject:(id)arg1;
- (_Bool)removeObjects:(id)arg1;
- (id)retrieveAll;
- (id)retrieveNumObjects:(unsigned long long)arg1;
- (_Bool)addObject:(id)arg1;
- (id)initWithPathComponent:(id)arg1;

@end


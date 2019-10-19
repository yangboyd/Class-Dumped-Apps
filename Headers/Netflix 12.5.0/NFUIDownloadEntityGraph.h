//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface NFUIDownloadEntityGraph : NSObject
{
    NSMutableDictionary *_entities;
    NSDictionary *_root;
}

+ (id)graphWithEntities:(id)arg1 outOrphanIds:(id *)arg2;
+ (id)graphWithEntities:(id)arg1;
+ (void)associate:(id)arg1 with:(id)arg2 inMutableRoot:(id)arg3;
@property(retain, nonatomic) NSDictionary *root; // @synthesize root=_root;
@property(retain, nonatomic) NSMutableDictionary *entities; // @synthesize entities=_entities;
- (void).cxx_destruct;
- (id)idsAssociatedWithIds:(id)arg1 ofType:(id)arg2;
- (id)idsAssociatedWithIds:(id)arg1 ofTypes:(id)arg2;
- (id)idsAssociatedWithId:(id)arg1 ofType:(id)arg2;
- (id)idsAssociatedWithId:(id)arg1 ofTypes:(id)arg2;
- (id)idsOfTypes:(id)arg1;
- (id)idsOfType:(id)arg1;
- (id)entityWithId:(id)arg1;
- (id)diffWithGraph:(id)arg1;
- (id)graphByRemovingWatchableIds:(id)arg1 outOrphanIds:(id *)arg2;
- (id)graphByRemovingWatchableIds:(id)arg1;
- (id)graphByAddingEntities:(id)arg1 outOrphanIds:(id *)arg2;
- (id)graphByAddingEntities:(id)arg1;

@end


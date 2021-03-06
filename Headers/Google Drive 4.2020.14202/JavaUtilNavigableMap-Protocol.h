//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"
#import "JavaUtilSortedMap-Protocol.h"

@protocol JavaUtilMap_Entry, JavaUtilNavigableMap, JavaUtilNavigableSet, JavaUtilSortedMap;

@protocol JavaUtilNavigableMap <JavaUtilSortedMap, JavaObject>
- (id <JavaUtilSortedMap>)tailMapWithId:(id)arg1;
- (id <JavaUtilSortedMap>)headMapWithId:(id)arg1;
- (id <JavaUtilSortedMap>)subMapWithId:(id)arg1 withId:(id)arg2;
- (id <JavaUtilNavigableMap>)tailMapWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (id <JavaUtilNavigableMap>)headMapWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (id <JavaUtilNavigableMap>)subMapWithId:(id)arg1 withBoolean:(_Bool)arg2 withId:(id)arg3 withBoolean:(_Bool)arg4;
- (id <JavaUtilNavigableSet>)descendingKeySet;
- (id <JavaUtilNavigableSet>)navigableKeySet;
- (id <JavaUtilNavigableMap>)descendingMap;
- (id <JavaUtilMap_Entry>)pollLastEntry;
- (id <JavaUtilMap_Entry>)pollFirstEntry;
- (id <JavaUtilMap_Entry>)lastEntry;
- (id <JavaUtilMap_Entry>)firstEntry;
- (id)higherKeyWithId:(id)arg1;
- (id <JavaUtilMap_Entry>)higherEntryWithId:(id)arg1;
- (id)ceilingKeyWithId:(id)arg1;
- (id <JavaUtilMap_Entry>)ceilingEntryWithId:(id)arg1;
- (id)floorKeyWithId:(id)arg1;
- (id <JavaUtilMap_Entry>)floorEntryWithId:(id)arg1;
- (id)lowerKeyWithId:(id)arg1;
- (id <JavaUtilMap_Entry>)lowerEntryWithId:(id)arg1;
@end


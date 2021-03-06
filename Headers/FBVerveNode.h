//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBVerveJSON-Protocol.h"

@class NSPointerArray;

@interface FBVerveNode : NSObject <FBVerveJSON>
{
    NSPointerArray *_references;
    unsigned int _version;
}

+ (id)node;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)accessInstanceVariablesDirectly;
- (void).cxx_destruct;
- (void)addResourceNamesToSet:(id)arg1;
- (void)foreachNode:(CDUnknownBlockType)arg1;
- (id)copyNodeWithFlags:(unsigned int)arg1;
- (void)removeReference:(id)arg1;
- (void)addReference:(id)arg1;
@property(readonly, nonatomic) NSPointerArray *references;
- (void)propagateVersion:(unsigned int)arg1;
- (void)incrementVersion;
@property(nonatomic) unsigned int version;
- (id)init;

@end


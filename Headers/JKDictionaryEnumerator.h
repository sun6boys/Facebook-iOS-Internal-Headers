//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@interface JKDictionaryEnumerator : NSEnumerator
{
    id collection;
    unsigned int nextObject;
}

- (id)nextObject;
- (id)allObjects;
- (void)dealloc;
- (id)initWithJKDictionary:(id)arg1;

@end


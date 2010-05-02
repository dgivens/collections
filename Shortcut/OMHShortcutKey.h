/**
 * @file OMHShortcutKey.h
 * @author Ole Morten Halvorsen
 *
 * @section LICENSE
 * Copyright (c) 2009, Ole Morten Halvorsen
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, 
 * are permitted provided that the following conditions are met:
 *
 * - Redistributions of source code must retain the above copyright notice, this list 
 *   of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright notice, this list
 *   of conditions and the following disclaimer in the documentation and/or other materials 
 *   provided with the distribution.
 * - Neither the name of Clyppan nor the names of its contributors may be used to endorse or 
 *   promote products derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF 
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#import <Cocoa/Cocoa.h>
#import <Carbon/Carbon.h>

@interface OMHShortcutKey: NSObject 
{
    id delegate;
    NSMutableDictionary *shortCutIds;
}


/**
 * Holds the delegate object
 */
@property( nonatomic, assign ) id delegate;

/**
 * Holds all registered shortcut keys
 */
@property( nonatomic, readonly ) id shortCutIds;


#pragma mark -
#pragma mark Class methods
/**
 * Returns a shared (singleton) instance
 */
+ (OMHShortcutKey *) sharedShortcutKey;

/*
 * Resets the shared instance
 */
+ (void) reset;


#pragma mark -
#pragma mark Instance methods
/**
 * Registers a shortcut key
 *
 * @param identifier String to identify the shortcut
 * @param key Which key to use
 * @param modifier Which modifier to use
 */
- (void) registerShortcutKey:(NSString *)identifier key:(signed short)key modifier:(unsigned int)modifier;

/**
 * Unregisters a shortcut key
 *
 * @param identifier The identifier of the shortcut key to unregister
 */
- (void) unRegisterShortcutKey:(NSString *)identifier;


@end

/* Generated code for Python module 'pymysql.charset'
 * created by Nuitka version 1.0.7
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_pymysql$charset" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pymysql$charset;
PyDictObject *moduledict_pymysql$charset;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[213];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[213];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pymysql.charset"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 213; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pymysql$charset(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 213; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_d4dbf375af2951184936f319d5930071;
static PyCodeObject *codeobj_0cddcc73e22c6e5b4188fd3cd67cb9b5;
static PyCodeObject *codeobj_c6d7a5f057687290e210ec580cad22d3;
static PyCodeObject *codeobj_195acea31c58bbf34f8aefd3843e9218;
static PyCodeObject *codeobj_f2e9c4c9743b6fd5203ce9680fea796d;
static PyCodeObject *codeobj_550c8a3795170ecbb21341a8bf2f0461;
static PyCodeObject *codeobj_0ee67010c95c1dc3ea481a8e59bd25b4;
static PyCodeObject *codeobj_c6e44f2c74acbeb0cc0885549ca05dc6;
static PyCodeObject *codeobj_8f3b1686282d0c04c0356b2c2e464edd;
static PyCodeObject *codeobj_77acf801e330f24dc3bea18671ca76fd;
static PyCodeObject *codeobj_2b3fcac91ed5424343b36046d3e1c1e3;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[204]); CHECK_OBJECT(module_filename_obj);
    codeobj_d4dbf375af2951184936f319d5930071 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[205], NULL, NULL, 0, 0, 0);
    codeobj_0cddcc73e22c6e5b4188fd3cd67cb9b5 = MAKE_CODEOBJECT(module_filename_obj, 4, CO_NOFREE, mod_consts[38], mod_consts[206], NULL, 0, 0, 0);
    codeobj_c6d7a5f057687290e210ec580cad22d3 = MAKE_CODEOBJECT(module_filename_obj, 34, CO_NOFREE, mod_consts[50], mod_consts[206], NULL, 0, 0, 0);
    codeobj_195acea31c58bbf34f8aefd3843e9218 = MAKE_CODEOBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[207], NULL, 1, 0, 0);
    codeobj_f2e9c4c9743b6fd5203ce9680fea796d = MAKE_CODEOBJECT(module_filename_obj, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[208], NULL, 5, 0, 0);
    codeobj_550c8a3795170ecbb21341a8bf2f0461 = MAKE_CODEOBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[207], NULL, 1, 0, 0);
    codeobj_0ee67010c95c1dc3ea481a8e59bd25b4 = MAKE_CODEOBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[52], mod_consts[209], NULL, 2, 0, 0);
    codeobj_c6e44f2c74acbeb0cc0885549ca05dc6 = MAKE_CODEOBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[210], NULL, 2, 0, 0);
    codeobj_8f3b1686282d0c04c0356b2c2e464edd = MAKE_CODEOBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[211], NULL, 2, 0, 0);
    codeobj_77acf801e330f24dc3bea18671ca76fd = MAKE_CODEOBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[45], mod_consts[211], NULL, 1, 0, 0);
    codeobj_2b3fcac91ed5424343b36046d3e1c1e3 = MAKE_CODEOBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[207], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pymysql$charset$$$function__1___init__();


static PyObject *MAKE_FUNCTION_pymysql$charset$$$function__2___repr__();


static PyObject *MAKE_FUNCTION_pymysql$charset$$$function__3_encoding();


static PyObject *MAKE_FUNCTION_pymysql$charset$$$function__4_is_binary();


static PyObject *MAKE_FUNCTION_pymysql$charset$$$function__5___init__();


static PyObject *MAKE_FUNCTION_pymysql$charset$$$function__6_add();


static PyObject *MAKE_FUNCTION_pymysql$charset$$$function__7_by_id();


static PyObject *MAKE_FUNCTION_pymysql$charset$$$function__8_by_name();


// The module function definitions.
static PyObject *impl_pymysql$charset$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_id = python_pars[1];
    PyObject *par_name = python_pars[2];
    PyObject *par_collation = python_pars[3];
    PyObject *par_is_default = python_pars[4];
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_f2e9c4c9743b6fd5203ce9680fea796d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_f2e9c4c9743b6fd5203ce9680fea796d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_id);
        tmp_tuple_element_1 = par_id;
        tmp_iter_arg_1 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_iter_arg_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_name);
        tmp_tuple_element_1 = par_name;
        PyTuple_SET_ITEM0(tmp_iter_arg_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_collation);
        tmp_tuple_element_1 = par_collation;
        PyTuple_SET_ITEM0(tmp_iter_arg_1, 2, tmp_tuple_element_1);
        tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    if (isFrameUnusable(cache_frame_f2e9c4c9743b6fd5203ce9680fea796d)) {
        Py_XDECREF(cache_frame_f2e9c4c9743b6fd5203ce9680fea796d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f2e9c4c9743b6fd5203ce9680fea796d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f2e9c4c9743b6fd5203ce9680fea796d = MAKE_FUNCTION_FRAME(codeobj_f2e9c4c9743b6fd5203ce9680fea796d, module_pymysql$charset, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f2e9c4c9743b6fd5203ce9680fea796d->m_type_description == NULL);
    frame_f2e9c4c9743b6fd5203ce9680fea796d = cache_frame_f2e9c4c9743b6fd5203ce9680fea796d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f2e9c4c9743b6fd5203ce9680fea796d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f2e9c4c9743b6fd5203ce9680fea796d) == 2); // Frame stack

    // Framed code:
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 6;
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 6;
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 6;
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 6;
                    goto try_except_handler_2;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[0];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 6;
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assattr_value_1 = tmp_tuple_unpack_1__element_1;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_1 = "ooooo";
            goto try_except_handler_1;
        }
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assattr_value_2 = tmp_tuple_unpack_1__element_2;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[2], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_1 = "ooooo";
            goto try_except_handler_1;
        }
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assattr_value_3 = tmp_tuple_unpack_1__element_3;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[3], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_1 = "ooooo";
            goto try_except_handler_1;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_is_default);
        tmp_cmp_expr_left_1 = par_is_default;
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_assattr_value_4 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[5], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f2e9c4c9743b6fd5203ce9680fea796d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f2e9c4c9743b6fd5203ce9680fea796d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f2e9c4c9743b6fd5203ce9680fea796d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f2e9c4c9743b6fd5203ce9680fea796d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f2e9c4c9743b6fd5203ce9680fea796d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f2e9c4c9743b6fd5203ce9680fea796d,
        type_description_1,
        par_self,
        par_id,
        par_name,
        par_collation,
        par_is_default
    );


    // Release cached frame if used for exception.
    if (frame_f2e9c4c9743b6fd5203ce9680fea796d == cache_frame_f2e9c4c9743b6fd5203ce9680fea796d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f2e9c4c9743b6fd5203ce9680fea796d);
        cache_frame_f2e9c4c9743b6fd5203ce9680fea796d = NULL;
    }

    assertFrameObject(frame_f2e9c4c9743b6fd5203ce9680fea796d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_collation);
    Py_DECREF(par_collation);
    CHECK_OBJECT(par_is_default);
    Py_DECREF(par_is_default);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_collation);
    Py_DECREF(par_collation);
    CHECK_OBJECT(par_is_default);
    Py_DECREF(par_is_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pymysql$charset$$$function__2___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_550c8a3795170ecbb21341a8bf2f0461;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_550c8a3795170ecbb21341a8bf2f0461 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_550c8a3795170ecbb21341a8bf2f0461)) {
        Py_XDECREF(cache_frame_550c8a3795170ecbb21341a8bf2f0461);

#if _DEBUG_REFCOUNTS
        if (cache_frame_550c8a3795170ecbb21341a8bf2f0461 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_550c8a3795170ecbb21341a8bf2f0461 = MAKE_FUNCTION_FRAME(codeobj_550c8a3795170ecbb21341a8bf2f0461, module_pymysql$charset, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_550c8a3795170ecbb21341a8bf2f0461->m_type_description == NULL);
    frame_550c8a3795170ecbb21341a8bf2f0461 = cache_frame_550c8a3795170ecbb21341a8bf2f0461;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_550c8a3795170ecbb21341a8bf2f0461);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_550c8a3795170ecbb21341a8bf2f0461) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_mod_expr_left_1 = mod_consts[6];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = PyTuple_New(3);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_550c8a3795170ecbb21341a8bf2f0461);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_550c8a3795170ecbb21341a8bf2f0461);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_550c8a3795170ecbb21341a8bf2f0461);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_550c8a3795170ecbb21341a8bf2f0461, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_550c8a3795170ecbb21341a8bf2f0461->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_550c8a3795170ecbb21341a8bf2f0461, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_550c8a3795170ecbb21341a8bf2f0461,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_550c8a3795170ecbb21341a8bf2f0461 == cache_frame_550c8a3795170ecbb21341a8bf2f0461) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_550c8a3795170ecbb21341a8bf2f0461);
        cache_frame_550c8a3795170ecbb21341a8bf2f0461 = NULL;
    }

    assertFrameObject(frame_550c8a3795170ecbb21341a8bf2f0461);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pymysql$charset$$$function__3_encoding(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_name = NULL;
    struct Nuitka_FrameObject *frame_77acf801e330f24dc3bea18671ca76fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_77acf801e330f24dc3bea18671ca76fd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_77acf801e330f24dc3bea18671ca76fd)) {
        Py_XDECREF(cache_frame_77acf801e330f24dc3bea18671ca76fd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_77acf801e330f24dc3bea18671ca76fd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_77acf801e330f24dc3bea18671ca76fd = MAKE_FUNCTION_FRAME(codeobj_77acf801e330f24dc3bea18671ca76fd, module_pymysql$charset, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_77acf801e330f24dc3bea18671ca76fd->m_type_description == NULL);
    frame_77acf801e330f24dc3bea18671ca76fd = cache_frame_77acf801e330f24dc3bea18671ca76fd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_77acf801e330f24dc3bea18671ca76fd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_77acf801e330f24dc3bea18671ca76fd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_name == NULL);
        var_name = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_name);
        tmp_cmp_expr_left_1 = var_name;
        tmp_cmp_expr_right_1 = mod_consts[7];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[8];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_name);
        tmp_cmp_expr_left_2 = var_name;
        tmp_cmp_expr_right_2 = mod_consts[9];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = mod_consts[10];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_name);
        tmp_cmp_expr_left_3 = var_name;
        tmp_cmp_expr_right_3 = mod_consts[11];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = mod_consts[12];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_name);
        tmp_cmp_expr_left_4 = var_name;
        tmp_cmp_expr_right_4 = mod_consts[13];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_return_value = mod_consts[14];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_4:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_77acf801e330f24dc3bea18671ca76fd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_77acf801e330f24dc3bea18671ca76fd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_77acf801e330f24dc3bea18671ca76fd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_77acf801e330f24dc3bea18671ca76fd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_77acf801e330f24dc3bea18671ca76fd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_77acf801e330f24dc3bea18671ca76fd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_77acf801e330f24dc3bea18671ca76fd,
        type_description_1,
        par_self,
        var_name
    );


    // Release cached frame if used for exception.
    if (frame_77acf801e330f24dc3bea18671ca76fd == cache_frame_77acf801e330f24dc3bea18671ca76fd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_77acf801e330f24dc3bea18671ca76fd);
        cache_frame_77acf801e330f24dc3bea18671ca76fd = NULL;
    }

    assertFrameObject(frame_77acf801e330f24dc3bea18671ca76fd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_name);
    tmp_return_value = var_name;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_name);
    Py_DECREF(var_name);
    var_name = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_name);
    var_name = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pymysql$charset$$$function__4_is_binary(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2b3fcac91ed5424343b36046d3e1c1e3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2b3fcac91ed5424343b36046d3e1c1e3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2b3fcac91ed5424343b36046d3e1c1e3)) {
        Py_XDECREF(cache_frame_2b3fcac91ed5424343b36046d3e1c1e3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2b3fcac91ed5424343b36046d3e1c1e3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2b3fcac91ed5424343b36046d3e1c1e3 = MAKE_FUNCTION_FRAME(codeobj_2b3fcac91ed5424343b36046d3e1c1e3, module_pymysql$charset, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2b3fcac91ed5424343b36046d3e1c1e3->m_type_description == NULL);
    frame_2b3fcac91ed5424343b36046d3e1c1e3 = cache_frame_2b3fcac91ed5424343b36046d3e1c1e3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2b3fcac91ed5424343b36046d3e1c1e3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2b3fcac91ed5424343b36046d3e1c1e3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[15];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2b3fcac91ed5424343b36046d3e1c1e3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2b3fcac91ed5424343b36046d3e1c1e3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2b3fcac91ed5424343b36046d3e1c1e3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2b3fcac91ed5424343b36046d3e1c1e3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2b3fcac91ed5424343b36046d3e1c1e3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2b3fcac91ed5424343b36046d3e1c1e3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2b3fcac91ed5424343b36046d3e1c1e3,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2b3fcac91ed5424343b36046d3e1c1e3 == cache_frame_2b3fcac91ed5424343b36046d3e1c1e3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2b3fcac91ed5424343b36046d3e1c1e3);
        cache_frame_2b3fcac91ed5424343b36046d3e1c1e3 = NULL;
    }

    assertFrameObject(frame_2b3fcac91ed5424343b36046d3e1c1e3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pymysql$charset$$$function__5___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_195acea31c58bbf34f8aefd3843e9218;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_195acea31c58bbf34f8aefd3843e9218 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_195acea31c58bbf34f8aefd3843e9218)) {
        Py_XDECREF(cache_frame_195acea31c58bbf34f8aefd3843e9218);

#if _DEBUG_REFCOUNTS
        if (cache_frame_195acea31c58bbf34f8aefd3843e9218 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_195acea31c58bbf34f8aefd3843e9218 = MAKE_FUNCTION_FRAME(codeobj_195acea31c58bbf34f8aefd3843e9218, module_pymysql$charset, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_195acea31c58bbf34f8aefd3843e9218->m_type_description == NULL);
    frame_195acea31c58bbf34f8aefd3843e9218 = cache_frame_195acea31c58bbf34f8aefd3843e9218;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_195acea31c58bbf34f8aefd3843e9218);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_195acea31c58bbf34f8aefd3843e9218) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = PyDict_New();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[16], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = PyDict_New();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[17], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_195acea31c58bbf34f8aefd3843e9218);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_195acea31c58bbf34f8aefd3843e9218);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_195acea31c58bbf34f8aefd3843e9218, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_195acea31c58bbf34f8aefd3843e9218->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_195acea31c58bbf34f8aefd3843e9218, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_195acea31c58bbf34f8aefd3843e9218,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_195acea31c58bbf34f8aefd3843e9218 == cache_frame_195acea31c58bbf34f8aefd3843e9218) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_195acea31c58bbf34f8aefd3843e9218);
        cache_frame_195acea31c58bbf34f8aefd3843e9218 = NULL;
    }

    assertFrameObject(frame_195acea31c58bbf34f8aefd3843e9218);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pymysql$charset$$$function__6_add(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_c = python_pars[1];
    struct Nuitka_FrameObject *frame_0ee67010c95c1dc3ea481a8e59bd25b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_0ee67010c95c1dc3ea481a8e59bd25b4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0ee67010c95c1dc3ea481a8e59bd25b4)) {
        Py_XDECREF(cache_frame_0ee67010c95c1dc3ea481a8e59bd25b4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0ee67010c95c1dc3ea481a8e59bd25b4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0ee67010c95c1dc3ea481a8e59bd25b4 = MAKE_FUNCTION_FRAME(codeobj_0ee67010c95c1dc3ea481a8e59bd25b4, module_pymysql$charset, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0ee67010c95c1dc3ea481a8e59bd25b4->m_type_description == NULL);
    frame_0ee67010c95c1dc3ea481a8e59bd25b4 = cache_frame_0ee67010c95c1dc3ea481a8e59bd25b4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0ee67010c95c1dc3ea481a8e59bd25b4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0ee67010c95c1dc3ea481a8e59bd25b4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_c);
        tmp_ass_subvalue_1 = par_c;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_c);
        tmp_expression_value_2 = par_c;
        tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_c);
        tmp_expression_value_3 = par_c;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_c);
        tmp_ass_subvalue_2 = par_c;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[17]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_c);
        tmp_expression_value_5 = par_c;
        tmp_ass_subscript_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[2]);
        if (tmp_ass_subscript_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subscribed_2);

            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subscript_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ee67010c95c1dc3ea481a8e59bd25b4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ee67010c95c1dc3ea481a8e59bd25b4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0ee67010c95c1dc3ea481a8e59bd25b4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0ee67010c95c1dc3ea481a8e59bd25b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0ee67010c95c1dc3ea481a8e59bd25b4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0ee67010c95c1dc3ea481a8e59bd25b4,
        type_description_1,
        par_self,
        par_c
    );


    // Release cached frame if used for exception.
    if (frame_0ee67010c95c1dc3ea481a8e59bd25b4 == cache_frame_0ee67010c95c1dc3ea481a8e59bd25b4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0ee67010c95c1dc3ea481a8e59bd25b4);
        cache_frame_0ee67010c95c1dc3ea481a8e59bd25b4 = NULL;
    }

    assertFrameObject(frame_0ee67010c95c1dc3ea481a8e59bd25b4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_c);
    Py_DECREF(par_c);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pymysql$charset$$$function__7_by_id(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_id = python_pars[1];
    struct Nuitka_FrameObject *frame_c6e44f2c74acbeb0cc0885549ca05dc6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c6e44f2c74acbeb0cc0885549ca05dc6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c6e44f2c74acbeb0cc0885549ca05dc6)) {
        Py_XDECREF(cache_frame_c6e44f2c74acbeb0cc0885549ca05dc6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c6e44f2c74acbeb0cc0885549ca05dc6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c6e44f2c74acbeb0cc0885549ca05dc6 = MAKE_FUNCTION_FRAME(codeobj_c6e44f2c74acbeb0cc0885549ca05dc6, module_pymysql$charset, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c6e44f2c74acbeb0cc0885549ca05dc6->m_type_description == NULL);
    frame_c6e44f2c74acbeb0cc0885549ca05dc6 = cache_frame_c6e44f2c74acbeb0cc0885549ca05dc6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c6e44f2c74acbeb0cc0885549ca05dc6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c6e44f2c74acbeb0cc0885549ca05dc6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[16]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_id);
        tmp_subscript_value_1 = par_id;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c6e44f2c74acbeb0cc0885549ca05dc6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c6e44f2c74acbeb0cc0885549ca05dc6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c6e44f2c74acbeb0cc0885549ca05dc6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c6e44f2c74acbeb0cc0885549ca05dc6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c6e44f2c74acbeb0cc0885549ca05dc6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c6e44f2c74acbeb0cc0885549ca05dc6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c6e44f2c74acbeb0cc0885549ca05dc6,
        type_description_1,
        par_self,
        par_id
    );


    // Release cached frame if used for exception.
    if (frame_c6e44f2c74acbeb0cc0885549ca05dc6 == cache_frame_c6e44f2c74acbeb0cc0885549ca05dc6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c6e44f2c74acbeb0cc0885549ca05dc6);
        cache_frame_c6e44f2c74acbeb0cc0885549ca05dc6 = NULL;
    }

    assertFrameObject(frame_c6e44f2c74acbeb0cc0885549ca05dc6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pymysql$charset$$$function__8_by_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_8f3b1686282d0c04c0356b2c2e464edd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8f3b1686282d0c04c0356b2c2e464edd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8f3b1686282d0c04c0356b2c2e464edd)) {
        Py_XDECREF(cache_frame_8f3b1686282d0c04c0356b2c2e464edd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8f3b1686282d0c04c0356b2c2e464edd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8f3b1686282d0c04c0356b2c2e464edd = MAKE_FUNCTION_FRAME(codeobj_8f3b1686282d0c04c0356b2c2e464edd, module_pymysql$charset, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8f3b1686282d0c04c0356b2c2e464edd->m_type_description == NULL);
    frame_8f3b1686282d0c04c0356b2c2e464edd = cache_frame_8f3b1686282d0c04c0356b2c2e464edd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8f3b1686282d0c04c0356b2c2e464edd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8f3b1686282d0c04c0356b2c2e464edd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[17]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_expression_value_3 = par_name;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[19]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8f3b1686282d0c04c0356b2c2e464edd->m_frame.f_lineno = 48;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8f3b1686282d0c04c0356b2c2e464edd->m_frame.f_lineno = 48;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8f3b1686282d0c04c0356b2c2e464edd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8f3b1686282d0c04c0356b2c2e464edd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8f3b1686282d0c04c0356b2c2e464edd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8f3b1686282d0c04c0356b2c2e464edd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f3b1686282d0c04c0356b2c2e464edd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f3b1686282d0c04c0356b2c2e464edd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8f3b1686282d0c04c0356b2c2e464edd,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_8f3b1686282d0c04c0356b2c2e464edd == cache_frame_8f3b1686282d0c04c0356b2c2e464edd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8f3b1686282d0c04c0356b2c2e464edd);
        cache_frame_8f3b1686282d0c04c0356b2c2e464edd = NULL;
    }

    assertFrameObject(frame_8f3b1686282d0c04c0356b2c2e464edd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pymysql$charset$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymysql$charset$$$function__1___init__,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[41],
#endif
        codeobj_f2e9c4c9743b6fd5203ce9680fea796d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pymysql$charset,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymysql$charset$$$function__2___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymysql$charset$$$function__2___repr__,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        mod_consts[43],
#endif
        codeobj_550c8a3795170ecbb21341a8bf2f0461,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pymysql$charset,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymysql$charset$$$function__3_encoding() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymysql$charset$$$function__3_encoding,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[46],
#endif
        codeobj_77acf801e330f24dc3bea18671ca76fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pymysql$charset,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymysql$charset$$$function__4_is_binary() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymysql$charset$$$function__4_is_binary,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[48],
#endif
        codeobj_2b3fcac91ed5424343b36046d3e1c1e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pymysql$charset,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymysql$charset$$$function__5___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymysql$charset$$$function__5___init__,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[51],
#endif
        codeobj_195acea31c58bbf34f8aefd3843e9218,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pymysql$charset,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymysql$charset$$$function__6_add() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymysql$charset$$$function__6_add,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        mod_consts[53],
#endif
        codeobj_0ee67010c95c1dc3ea481a8e59bd25b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pymysql$charset,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymysql$charset$$$function__7_by_id() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymysql$charset$$$function__7_by_id,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[55],
#endif
        codeobj_c6e44f2c74acbeb0cc0885549ca05dc6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pymysql$charset,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pymysql$charset$$$function__8_by_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pymysql$charset$$$function__8_by_name,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        mod_consts[57],
#endif
        codeobj_8f3b1686282d0c04c0356b2c2e464edd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pymysql$charset,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_pymysql$charset[] = {
    impl_pymysql$charset$$$function__1___init__,
    impl_pymysql$charset$$$function__2___repr__,
    impl_pymysql$charset$$$function__3_encoding,
    impl_pymysql$charset$$$function__4_is_binary,
    impl_pymysql$charset$$$function__5___init__,
    impl_pymysql$charset$$$function__6_add,
    impl_pymysql$charset$$$function__7_by_id,
    impl_pymysql$charset$$$function__8_by_name,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_pymysql$charset;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_pymysql$charset) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_pymysql$charset[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_pymysql$charset,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pymysql$charset(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pymysql.charset");

    // Store the module for future use.
    module_pymysql$charset = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("pymysql.charset: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pymysql.charset: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pymysql.charset: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpymysql$charset\n");

    moduledict_pymysql$charset = MODULE_DICT(module_pymysql$charset);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pymysql$charset,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pymysql$charset,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[212]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pymysql$charset,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pymysql$charset,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pymysql$charset,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pymysql$charset);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pymysql$charset, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_pymysql$charset, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pymysql$charset, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pymysql$charset);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pymysql$charset, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    struct Nuitka_FrameObject *frame_d4dbf375af2951184936f319d5930071;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_pymysql$charset$$$class__1_Charset_4 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_pymysql$charset$$$class__2_Charsets_34 = NULL;
    struct Nuitka_FrameObject *frame_c6d7a5f057687290e210ec580cad22d3_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c6d7a5f057687290e210ec580cad22d3_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_d4dbf375af2951184936f319d5930071 = MAKE_MODULE_FRAME(codeobj_d4dbf375af2951184936f319d5930071, module_pymysql$charset);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_d4dbf375af2951184936f319d5930071);
    assert(Py_REFCNT(frame_d4dbf375af2951184936f319d5930071) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[23], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[24], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_Copy(mod_consts[26]);
        UPDATE_STRING_DICT1(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[28];
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }
        assert(!(tmp_metaclass_value_1 == NULL));
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        condexpr_end_1:;
        tmp_bases_value_1 = mod_consts[29];
        tmp_assign_source_6 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_6;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[28];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_1 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_1, mod_consts[30]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        tmp_args_value_1 = mod_consts[31];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 4;
        tmp_assign_source_7 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_7;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_3 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[32]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[33];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[34];
        tmp_getattr_default_1 = mod_consts[35];
        tmp_tuple_element_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_type_arg_1;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_1 = tmp_class_creation_1__prepared;
            tmp_expression_value_4 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_value_4 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[34]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 4;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_8;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_9;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pymysql$charset$$$class__1_Charset_4 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[36];
        tmp_res = PyObject_SetItem(locals_pymysql$charset$$$class__1_Charset_4, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_pymysql$charset$$$class__1_Charset_4, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        if (isFrameUnusable(cache_frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2)) {
            Py_XDECREF(cache_frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2 = MAKE_FUNCTION_FRAME(codeobj_0cddcc73e22c6e5b4188fd3cd67cb9b5, module_pymysql$charset, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2->m_type_description == NULL);
        frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2 = cache_frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_pymysql$charset$$$function__1___init__();

        tmp_res = PyObject_SetItem(locals_pymysql$charset$$$class__1_Charset_4, mod_consts[40], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pymysql$charset$$$function__2___repr__();

        tmp_res = PyObject_SetItem(locals_pymysql$charset$$$class__1_Charset_4, mod_consts[42], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            tmp_res = MAPPING_HAS_ITEM(locals_pymysql$charset$$$class__1_Charset_4, mod_consts[44]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_2 = PyObject_GetItem(locals_pymysql$charset$$$class__1_Charset_4, mod_consts[44]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[44]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 16;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_pymysql$charset$$$function__3_encoding();

            frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2->m_frame.f_lineno = 16;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_pymysql$charset$$$function__3_encoding();

            frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2->m_frame.f_lineno = 16;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_pymysql$charset$$$class__1_Charset_4, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_4;
            tmp_res = MAPPING_HAS_ITEM(locals_pymysql$charset$$$class__1_Charset_4, mod_consts[44]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_4 = PyObject_GetItem(locals_pymysql$charset$$$class__1_Charset_4, mod_consts[44]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[44]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 29;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_pymysql$charset$$$function__4_is_binary();

            frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2->m_frame.f_lineno = 29;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_4 = MAKE_FUNCTION_pymysql$charset$$$function__4_is_binary();

            frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2->m_frame.f_lineno = 29;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_pymysql$charset$$$class__1_Charset_4, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2 == cache_frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2);
            cache_frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2 = NULL;
        }

        assertFrameObject(frame_0cddcc73e22c6e5b4188fd3cd67cb9b5_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_6 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = mod_consts[38];
            tmp_args_value_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[29];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_pymysql$charset$$$class__1_Charset_4;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 4;
            tmp_assign_source_10 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 4;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_10;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_9 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_9);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_pymysql$charset$$$class__1_Charset_4);
        locals_pymysql$charset$$$class__1_Charset_4 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymysql$charset$$$class__1_Charset_4);
        locals_pymysql$charset$$$class__1_Charset_4 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 4;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_9);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_metaclass_value_2;
        bool tmp_condition_result_7;
        PyObject *tmp_key_value_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        PyObject *tmp_bases_value_2;
        tmp_key_value_4 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_4, tmp_key_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_value_5 = mod_consts[28];
        tmp_metaclass_value_2 = DICT_GET_ITEM0(tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_metaclass_value_2 == NULL) {
            tmp_metaclass_value_2 = Py_None;
        }
        assert(!(tmp_metaclass_value_2 == NULL));
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        condexpr_end_4:;
        tmp_bases_value_2 = mod_consts[29];
        tmp_assign_source_12 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_12;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_key_value_6;
        PyObject *tmp_dict_arg_value_6;
        tmp_key_value_6 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_value_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_6, tmp_key_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[28];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 34;

        goto try_except_handler_4;
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_5 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[30]);
        tmp_condition_result_9 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_value_3;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_6 = tmp_class_creation_2__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[30]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_4;
        }
        tmp_args_value_3 = mod_consts[49];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 34;
        tmp_assign_source_13 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_7 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[32]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_4;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[33];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[34];
        tmp_getattr_default_2 = mod_consts[35];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_2 = tmp_class_creation_2__prepared;
            tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_8 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[34]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 34;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_14;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pymysql$charset$$$class__2_Charsets_34 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[36];
        tmp_res = PyObject_SetItem(locals_pymysql$charset$$$class__2_Charsets_34, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_pymysql$charset$$$class__2_Charsets_34, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_6;
        }
        if (isFrameUnusable(cache_frame_c6d7a5f057687290e210ec580cad22d3_3)) {
            Py_XDECREF(cache_frame_c6d7a5f057687290e210ec580cad22d3_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c6d7a5f057687290e210ec580cad22d3_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c6d7a5f057687290e210ec580cad22d3_3 = MAKE_FUNCTION_FRAME(codeobj_c6d7a5f057687290e210ec580cad22d3, module_pymysql$charset, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c6d7a5f057687290e210ec580cad22d3_3->m_type_description == NULL);
        frame_c6d7a5f057687290e210ec580cad22d3_3 = cache_frame_c6d7a5f057687290e210ec580cad22d3_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c6d7a5f057687290e210ec580cad22d3_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c6d7a5f057687290e210ec580cad22d3_3) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_pymysql$charset$$$function__5___init__();

        tmp_res = PyObject_SetItem(locals_pymysql$charset$$$class__2_Charsets_34, mod_consts[40], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_pymysql$charset$$$function__6_add();

        tmp_res = PyObject_SetItem(locals_pymysql$charset$$$class__2_Charsets_34, mod_consts[52], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_pymysql$charset$$$function__7_by_id();

        tmp_res = PyObject_SetItem(locals_pymysql$charset$$$class__2_Charsets_34, mod_consts[54], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_pymysql$charset$$$function__8_by_name();

        tmp_res = PyObject_SetItem(locals_pymysql$charset$$$class__2_Charsets_34, mod_consts[56], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c6d7a5f057687290e210ec580cad22d3_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c6d7a5f057687290e210ec580cad22d3_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c6d7a5f057687290e210ec580cad22d3_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c6d7a5f057687290e210ec580cad22d3_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c6d7a5f057687290e210ec580cad22d3_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c6d7a5f057687290e210ec580cad22d3_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_c6d7a5f057687290e210ec580cad22d3_3 == cache_frame_c6d7a5f057687290e210ec580cad22d3_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c6d7a5f057687290e210ec580cad22d3_3);
            cache_frame_c6d7a5f057687290e210ec580cad22d3_3 = NULL;
        }

        assertFrameObject(frame_c6d7a5f057687290e210ec580cad22d3_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_8 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_4 = mod_consts[50];
            tmp_args_value_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[29];
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_pymysql$charset$$$class__2_Charsets_34;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 34;
            tmp_assign_source_16 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_16;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_15 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_pymysql$charset$$$class__2_Charsets_34);
        locals_pymysql$charset$$$class__2_Charsets_34 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pymysql$charset$$$class__2_Charsets_34);
        locals_pymysql$charset$$$class__2_Charsets_34 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 34;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_15);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 51;
        tmp_assign_source_17 = CALL_FUNCTION_NO_ARGS(tmp_called_value_9);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_17);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_11;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        assert(!(tmp_expression_value_9 == NULL));
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[52]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 64;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_11, mod_consts[59]);

        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 64;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_13;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[52]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 65;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_13, mod_consts[60]);

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 65;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_15;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[52]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 66;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_15, mod_consts[61]);

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 66;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_17;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[52]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 67;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_17, mod_consts[62]);

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 67;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_19;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[52]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 68;
        tmp_args_element_value_9 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_19, mod_consts[63]);

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 68;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_21;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[52]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 69;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_21, mod_consts[64]);

        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 69;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_23;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[52]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 70;
        tmp_args_element_value_11 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_23, mod_consts[65]);

        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 70;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_25;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[52]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 71;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_25, mod_consts[66]);

        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 71;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_value_27;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[52]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 72;
        tmp_args_element_value_13 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_27, mod_consts[67]);

        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 72;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_29;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[52]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 73;
        tmp_args_element_value_14 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_29, mod_consts[68]);

        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 73;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_31;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[52]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 74;
        tmp_args_element_value_15 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_31, mod_consts[69]);

        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 74;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_33;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[52]);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 75;
        tmp_args_element_value_16 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_33, mod_consts[70]);

        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 75;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_called_value_35;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[52]);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 76;
        tmp_args_element_value_17 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_35, mod_consts[71]);

        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 76;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_37;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[52]);
        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 77;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_37, mod_consts[72]);

        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 77;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_called_value_39;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[52]);
        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 78;
        tmp_args_element_value_19 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_39, mod_consts[73]);

        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 78;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_value_41;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[52]);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 79;
        tmp_args_element_value_20 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_41, mod_consts[74]);

        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 79;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_43;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[52]);
        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 80;
        tmp_args_element_value_21 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_43, mod_consts[75]);

        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 80;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_value_45;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[52]);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 81;
        tmp_args_element_value_22 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_45, mod_consts[76]);

        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 81;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_value_47;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[52]);
        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 82;
        tmp_args_element_value_23 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_47, mod_consts[77]);

        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 82;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_23);
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_called_value_49;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[52]);
        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 83;
        tmp_args_element_value_24 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_49, mod_consts[78]);

        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 83;
        tmp_call_result_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_50;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_called_value_51;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_called_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[52]);
        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 84;
        tmp_args_element_value_25 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_51, mod_consts[79]);

        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 84;
        tmp_call_result_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_25);
        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_value_53;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[52]);
        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_53 == NULL)) {
            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 85;
        tmp_args_element_value_26 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_53, mod_consts[80]);

        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 85;
        tmp_call_result_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_23;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_called_value_55;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[52]);
        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_55 == NULL)) {
            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 86;
        tmp_args_element_value_27 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_55, mod_consts[81]);

        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 86;
        tmp_call_result_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_27);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_57;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[52]);
        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 87;
        tmp_args_element_value_28 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_57, mod_consts[82]);

        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 87;
        tmp_call_result_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_56, tmp_args_element_value_28);
        Py_DECREF(tmp_called_value_56);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_25;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_called_value_59;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[52]);
        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 88;
        tmp_args_element_value_29 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_59, mod_consts[83]);

        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 88;
        tmp_call_result_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_58, tmp_args_element_value_29);
        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_element_value_29);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_call_result_26;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_value_61;
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[52]);
        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 89;
        tmp_args_element_value_30 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_61, mod_consts[84]);

        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 89;
        tmp_call_result_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_60, tmp_args_element_value_30);
        Py_DECREF(tmp_called_value_60);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_value_62;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_27;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_called_value_63;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_called_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[52]);
        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 90;
        tmp_args_element_value_31 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_63, mod_consts[85]);

        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 90;
        tmp_call_result_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_62, tmp_args_element_value_31);
        Py_DECREF(tmp_called_value_62);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_call_result_28;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_called_value_65;
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[52]);
        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 91;
        tmp_args_element_value_32 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_65, mod_consts[86]);

        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 91;
        tmp_call_result_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_64, tmp_args_element_value_32);
        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_value_66;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_call_result_29;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_value_67;
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_called_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[52]);
        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_67 == NULL)) {
            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 92;
        tmp_args_element_value_33 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_67, mod_consts[87]);

        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 92;
        tmp_call_result_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_66, tmp_args_element_value_33);
        Py_DECREF(tmp_called_value_66);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_value_68;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_call_result_30;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_called_value_69;
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_called_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[52]);
        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 93;
        tmp_args_element_value_34 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_69, mod_consts[88]);

        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 93;
        tmp_call_result_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_68, tmp_args_element_value_34);
        Py_DECREF(tmp_called_value_68);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_call_result_31;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_called_value_71;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_called_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[52]);
        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_71 == NULL)) {
            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 94;
        tmp_args_element_value_35 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_71, mod_consts[89]);

        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 94;
        tmp_call_result_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_70, tmp_args_element_value_35);
        Py_DECREF(tmp_called_value_70);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_called_value_72;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_call_result_32;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_called_value_73;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_called_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[52]);
        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 95;
        tmp_args_element_value_36 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_73, mod_consts[90]);

        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 95;
        tmp_call_result_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_72, tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_72);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_value_74;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_call_result_33;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_called_value_75;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_called_value_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[52]);
        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 96;
        tmp_args_element_value_37 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_75, mod_consts[91]);

        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 96;
        tmp_call_result_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_74, tmp_args_element_value_37);
        Py_DECREF(tmp_called_value_74);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_called_value_76;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_call_result_34;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_called_value_77;
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_called_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[52]);
        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 97;
        tmp_args_element_value_38 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_77, mod_consts[92]);

        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 97;
        tmp_call_result_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_76, tmp_args_element_value_38);
        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_value_78;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_call_result_35;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_called_value_79;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_called_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[52]);
        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_79 == NULL)) {
            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 98;
        tmp_args_element_value_39 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_79, mod_consts[93]);

        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 98;
        tmp_call_result_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_78, tmp_args_element_value_39);
        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_value_80;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_call_result_36;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_called_value_81;
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_called_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[52]);
        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 99;
        tmp_args_element_value_40 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_81, mod_consts[94]);

        if (tmp_args_element_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 99;
        tmp_call_result_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_80, tmp_args_element_value_40);
        Py_DECREF(tmp_called_value_80);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_called_value_82;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_call_result_37;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_called_value_83;
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_called_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[52]);
        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_83 == NULL)) {
            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 100;
        tmp_args_element_value_41 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_83, mod_consts[95]);

        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 100;
        tmp_call_result_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_82, tmp_args_element_value_41);
        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_value_84;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_call_result_38;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_called_value_85;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_called_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[52]);
        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_85 == NULL)) {
            tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 101;
        tmp_args_element_value_42 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_85, mod_consts[96]);

        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 101;
        tmp_call_result_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_84, tmp_args_element_value_42);
        Py_DECREF(tmp_called_value_84);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_called_value_86;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_call_result_39;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_called_value_87;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_called_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[52]);
        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_87 == NULL)) {
            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 102;
        tmp_args_element_value_43 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_87, mod_consts[97]);

        if (tmp_args_element_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 102;
        tmp_call_result_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_86, tmp_args_element_value_43);
        Py_DECREF(tmp_called_value_86);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_called_value_88;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_call_result_40;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_called_value_89;
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_called_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[52]);
        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_89 == NULL)) {
            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 103;
        tmp_args_element_value_44 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_89, mod_consts[98]);

        if (tmp_args_element_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 103;
        tmp_call_result_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_88, tmp_args_element_value_44);
        Py_DECREF(tmp_called_value_88);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        PyObject *tmp_called_value_90;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_call_result_41;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_called_value_91;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_called_value_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[52]);
        if (tmp_called_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_91 == NULL)) {
            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 104;
        tmp_args_element_value_45 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_91, mod_consts[99]);

        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 104;
        tmp_call_result_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_90, tmp_args_element_value_45);
        Py_DECREF(tmp_called_value_90);
        Py_DECREF(tmp_args_element_value_45);
        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_value_92;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_call_result_42;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_called_value_93;
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_called_value_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[52]);
        if (tmp_called_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_93 == NULL)) {
            tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_92);

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 105;
        tmp_args_element_value_46 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_93, mod_consts[100]);

        if (tmp_args_element_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_92);

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 105;
        tmp_call_result_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_92, tmp_args_element_value_46);
        Py_DECREF(tmp_called_value_92);
        Py_DECREF(tmp_args_element_value_46);
        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_called_value_94;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_call_result_43;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_called_value_95;
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_called_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[52]);
        if (tmp_called_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_95 == NULL)) {
            tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 106;
        tmp_args_element_value_47 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_95, mod_consts[101]);

        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 106;
        tmp_call_result_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_94, tmp_args_element_value_47);
        Py_DECREF(tmp_called_value_94);
        Py_DECREF(tmp_args_element_value_47);
        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        PyObject *tmp_called_value_96;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_call_result_44;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_called_value_97;
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_called_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[52]);
        if (tmp_called_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_97 == NULL)) {
            tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 107;
        tmp_args_element_value_48 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_97, mod_consts[102]);

        if (tmp_args_element_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 107;
        tmp_call_result_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_96, tmp_args_element_value_48);
        Py_DECREF(tmp_called_value_96);
        Py_DECREF(tmp_args_element_value_48);
        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_value_98;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_call_result_45;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_called_value_99;
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_called_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[52]);
        if (tmp_called_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_99 == NULL)) {
            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_98);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 108;
        tmp_args_element_value_49 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_99, mod_consts[103]);

        if (tmp_args_element_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_98);

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 108;
        tmp_call_result_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_98, tmp_args_element_value_49);
        Py_DECREF(tmp_called_value_98);
        Py_DECREF(tmp_args_element_value_49);
        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_called_value_100;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_call_result_46;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_called_value_101;
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_called_value_100 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[52]);
        if (tmp_called_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_101 == NULL)) {
            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 109;
        tmp_args_element_value_50 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_101, mod_consts[104]);

        if (tmp_args_element_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 109;
        tmp_call_result_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_100, tmp_args_element_value_50);
        Py_DECREF(tmp_called_value_100);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_called_value_102;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_call_result_47;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_called_value_103;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_called_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[52]);
        if (tmp_called_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_103 == NULL)) {
            tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_102);

            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 110;
        tmp_args_element_value_51 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_103, mod_consts[105]);

        if (tmp_args_element_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_102);

            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 110;
        tmp_call_result_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_102, tmp_args_element_value_51);
        Py_DECREF(tmp_called_value_102);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_47);
    }
    {
        PyObject *tmp_called_value_104;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_call_result_48;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_called_value_105;
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_called_value_104 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[52]);
        if (tmp_called_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_105 == NULL)) {
            tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 111;
        tmp_args_element_value_52 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_105, mod_consts[106]);

        if (tmp_args_element_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 111;
        tmp_call_result_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_104, tmp_args_element_value_52);
        Py_DECREF(tmp_called_value_104);
        Py_DECREF(tmp_args_element_value_52);
        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_called_value_106;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_call_result_49;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_called_value_107;
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_called_value_106 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[52]);
        if (tmp_called_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_107 == NULL)) {
            tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 112;
        tmp_args_element_value_53 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_107, mod_consts[107]);

        if (tmp_args_element_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 112;
        tmp_call_result_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_106, tmp_args_element_value_53);
        Py_DECREF(tmp_called_value_106);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_49);
    }
    {
        PyObject *tmp_called_value_108;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_call_result_50;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_called_value_109;
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_called_value_108 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[52]);
        if (tmp_called_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_109 == NULL)) {
            tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_108);

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 113;
        tmp_args_element_value_54 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_109, mod_consts[108]);

        if (tmp_args_element_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_108);

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 113;
        tmp_call_result_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_108, tmp_args_element_value_54);
        Py_DECREF(tmp_called_value_108);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_called_value_110;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_call_result_51;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_called_value_111;
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_called_value_110 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[52]);
        if (tmp_called_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_111 == NULL)) {
            tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 114;
        tmp_args_element_value_55 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_111, mod_consts[109]);

        if (tmp_args_element_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_110);

            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 114;
        tmp_call_result_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_110, tmp_args_element_value_55);
        Py_DECREF(tmp_called_value_110);
        Py_DECREF(tmp_args_element_value_55);
        if (tmp_call_result_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_51);
    }
    {
        PyObject *tmp_called_value_112;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_call_result_52;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_called_value_113;
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_called_value_112 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[52]);
        if (tmp_called_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_113 == NULL)) {
            tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 115;
        tmp_args_element_value_56 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_113, mod_consts[110]);

        if (tmp_args_element_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_112);

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 115;
        tmp_call_result_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_112, tmp_args_element_value_56);
        Py_DECREF(tmp_called_value_112);
        Py_DECREF(tmp_args_element_value_56);
        if (tmp_call_result_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_called_value_114;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_call_result_53;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_called_value_115;
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_called_value_114 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[52]);
        if (tmp_called_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_115 == NULL)) {
            tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_114);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 116;
        tmp_args_element_value_57 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_115, mod_consts[111]);

        if (tmp_args_element_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_114);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 116;
        tmp_call_result_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_114, tmp_args_element_value_57);
        Py_DECREF(tmp_called_value_114);
        Py_DECREF(tmp_args_element_value_57);
        if (tmp_call_result_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_called_value_116;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_call_result_54;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_called_value_117;
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_called_value_116 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[52]);
        if (tmp_called_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_called_value_117 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_117 == NULL)) {
            tmp_called_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_116);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 117;
        tmp_args_element_value_58 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_117, mod_consts[112]);

        if (tmp_args_element_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_116);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 117;
        tmp_call_result_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_116, tmp_args_element_value_58);
        Py_DECREF(tmp_called_value_116);
        Py_DECREF(tmp_args_element_value_58);
        if (tmp_call_result_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_54);
    }
    {
        PyObject *tmp_called_value_118;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_call_result_55;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_called_value_119;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_called_value_118 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[52]);
        if (tmp_called_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_119 == NULL)) {
            tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 118;
        tmp_args_element_value_59 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_119, mod_consts[113]);

        if (tmp_args_element_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_118);

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 118;
        tmp_call_result_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_118, tmp_args_element_value_59);
        Py_DECREF(tmp_called_value_118);
        Py_DECREF(tmp_args_element_value_59);
        if (tmp_call_result_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_55);
    }
    {
        PyObject *tmp_called_value_120;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_call_result_56;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_called_value_121;
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_called_value_120 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[52]);
        if (tmp_called_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_called_value_121 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_121 == NULL)) {
            tmp_called_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_120);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 119;
        tmp_args_element_value_60 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_121, mod_consts[114]);

        if (tmp_args_element_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_120);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 119;
        tmp_call_result_56 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_120, tmp_args_element_value_60);
        Py_DECREF(tmp_called_value_120);
        Py_DECREF(tmp_args_element_value_60);
        if (tmp_call_result_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_56);
    }
    {
        PyObject *tmp_called_value_122;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_call_result_57;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_called_value_123;
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_called_value_122 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[52]);
        if (tmp_called_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_called_value_123 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_123 == NULL)) {
            tmp_called_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 120;
        tmp_args_element_value_61 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_123, mod_consts[115]);

        if (tmp_args_element_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_122);

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 120;
        tmp_call_result_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_122, tmp_args_element_value_61);
        Py_DECREF(tmp_called_value_122);
        Py_DECREF(tmp_args_element_value_61);
        if (tmp_call_result_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_57);
    }
    {
        PyObject *tmp_called_value_124;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_call_result_58;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_called_value_125;
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_called_value_124 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[52]);
        if (tmp_called_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_called_value_125 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_125 == NULL)) {
            tmp_called_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 121;
        tmp_args_element_value_62 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_125, mod_consts[116]);

        if (tmp_args_element_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_124);

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 121;
        tmp_call_result_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_124, tmp_args_element_value_62);
        Py_DECREF(tmp_called_value_124);
        Py_DECREF(tmp_args_element_value_62);
        if (tmp_call_result_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_58);
    }
    {
        PyObject *tmp_called_value_126;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_call_result_59;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_called_value_127;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_called_value_126 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[52]);
        if (tmp_called_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_called_value_127 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_127 == NULL)) {
            tmp_called_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 122;
        tmp_args_element_value_63 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_127, mod_consts[117]);

        if (tmp_args_element_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_126);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 122;
        tmp_call_result_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_126, tmp_args_element_value_63);
        Py_DECREF(tmp_called_value_126);
        Py_DECREF(tmp_args_element_value_63);
        if (tmp_call_result_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_59);
    }
    {
        PyObject *tmp_called_value_128;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_call_result_60;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_called_value_129;
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_called_value_128 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[52]);
        if (tmp_called_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_called_value_129 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_129 == NULL)) {
            tmp_called_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_128);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 123;
        tmp_args_element_value_64 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_129, mod_consts[118]);

        if (tmp_args_element_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_128);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 123;
        tmp_call_result_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_128, tmp_args_element_value_64);
        Py_DECREF(tmp_called_value_128);
        Py_DECREF(tmp_args_element_value_64);
        if (tmp_call_result_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_60);
    }
    {
        PyObject *tmp_called_value_130;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_call_result_61;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_called_value_131;
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_called_value_130 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[52]);
        if (tmp_called_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_called_value_131 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_131 == NULL)) {
            tmp_called_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_130);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 124;
        tmp_args_element_value_65 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_131, mod_consts[119]);

        if (tmp_args_element_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_130);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 124;
        tmp_call_result_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_130, tmp_args_element_value_65);
        Py_DECREF(tmp_called_value_130);
        Py_DECREF(tmp_args_element_value_65);
        if (tmp_call_result_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_61);
    }
    {
        PyObject *tmp_called_value_132;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_call_result_62;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_called_value_133;
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_called_value_132 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[52]);
        if (tmp_called_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_called_value_133 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_133 == NULL)) {
            tmp_called_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_132);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 125;
        tmp_args_element_value_66 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_133, mod_consts[120]);

        if (tmp_args_element_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_132);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 125;
        tmp_call_result_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_132, tmp_args_element_value_66);
        Py_DECREF(tmp_called_value_132);
        Py_DECREF(tmp_args_element_value_66);
        if (tmp_call_result_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_62);
    }
    {
        PyObject *tmp_called_value_134;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_call_result_63;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_called_value_135;
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_called_value_134 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[52]);
        if (tmp_called_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_called_value_135 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_135 == NULL)) {
            tmp_called_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_134);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 126;
        tmp_args_element_value_67 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_135, mod_consts[121]);

        if (tmp_args_element_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_134);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 126;
        tmp_call_result_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_134, tmp_args_element_value_67);
        Py_DECREF(tmp_called_value_134);
        Py_DECREF(tmp_args_element_value_67);
        if (tmp_call_result_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_63);
    }
    {
        PyObject *tmp_called_value_136;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_call_result_64;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_called_value_137;
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_called_value_136 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[52]);
        if (tmp_called_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_called_value_137 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_137 == NULL)) {
            tmp_called_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);

            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 127;
        tmp_args_element_value_68 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_137, mod_consts[122]);

        if (tmp_args_element_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_136);

            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 127;
        tmp_call_result_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_136, tmp_args_element_value_68);
        Py_DECREF(tmp_called_value_136);
        Py_DECREF(tmp_args_element_value_68);
        if (tmp_call_result_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_64);
    }
    {
        PyObject *tmp_called_value_138;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_call_result_65;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_called_value_139;
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_called_value_138 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[52]);
        if (tmp_called_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_called_value_139 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_139 == NULL)) {
            tmp_called_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 128;
        tmp_args_element_value_69 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_139, mod_consts[123]);

        if (tmp_args_element_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 128;
        tmp_call_result_65 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_138, tmp_args_element_value_69);
        Py_DECREF(tmp_called_value_138);
        Py_DECREF(tmp_args_element_value_69);
        if (tmp_call_result_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_65);
    }
    {
        PyObject *tmp_called_value_140;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_call_result_66;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_called_value_141;
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_called_value_140 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[52]);
        if (tmp_called_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_called_value_141 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_141 == NULL)) {
            tmp_called_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_140);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 129;
        tmp_args_element_value_70 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_141, mod_consts[124]);

        if (tmp_args_element_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_140);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 129;
        tmp_call_result_66 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_140, tmp_args_element_value_70);
        Py_DECREF(tmp_called_value_140);
        Py_DECREF(tmp_args_element_value_70);
        if (tmp_call_result_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_66);
    }
    {
        PyObject *tmp_called_value_142;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_call_result_67;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_called_value_143;
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_called_value_142 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[52]);
        if (tmp_called_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_called_value_143 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_143 == NULL)) {
            tmp_called_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_142);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 130;
        tmp_args_element_value_71 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_143, mod_consts[125]);

        if (tmp_args_element_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_142);

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 130;
        tmp_call_result_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_142, tmp_args_element_value_71);
        Py_DECREF(tmp_called_value_142);
        Py_DECREF(tmp_args_element_value_71);
        if (tmp_call_result_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_67);
    }
    {
        PyObject *tmp_called_value_144;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_call_result_68;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_called_value_145;
        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_76 == NULL)) {
            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_called_value_144 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[52]);
        if (tmp_called_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_called_value_145 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_145 == NULL)) {
            tmp_called_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_144);

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 131;
        tmp_args_element_value_72 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_145, mod_consts[126]);

        if (tmp_args_element_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_144);

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 131;
        tmp_call_result_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_144, tmp_args_element_value_72);
        Py_DECREF(tmp_called_value_144);
        Py_DECREF(tmp_args_element_value_72);
        if (tmp_call_result_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_68);
    }
    {
        PyObject *tmp_called_value_146;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_call_result_69;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_called_value_147;
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_called_value_146 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[52]);
        if (tmp_called_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_called_value_147 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_147 == NULL)) {
            tmp_called_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_146);

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 132;
        tmp_args_element_value_73 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_147, mod_consts[127]);

        if (tmp_args_element_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_146);

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 132;
        tmp_call_result_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_146, tmp_args_element_value_73);
        Py_DECREF(tmp_called_value_146);
        Py_DECREF(tmp_args_element_value_73);
        if (tmp_call_result_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_69);
    }
    {
        PyObject *tmp_called_value_148;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_call_result_70;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_called_value_149;
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_called_value_148 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[52]);
        if (tmp_called_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_called_value_149 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_149 == NULL)) {
            tmp_called_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_148);

            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 133;
        tmp_args_element_value_74 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_149, mod_consts[128]);

        if (tmp_args_element_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_148);

            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 133;
        tmp_call_result_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_148, tmp_args_element_value_74);
        Py_DECREF(tmp_called_value_148);
        Py_DECREF(tmp_args_element_value_74);
        if (tmp_call_result_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_70);
    }
    {
        PyObject *tmp_called_value_150;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_call_result_71;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_called_value_151;
        tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_79 == NULL)) {
            tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_called_value_150 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[52]);
        if (tmp_called_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_called_value_151 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_151 == NULL)) {
            tmp_called_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_150);

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 134;
        tmp_args_element_value_75 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_151, mod_consts[129]);

        if (tmp_args_element_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_150);

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 134;
        tmp_call_result_71 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_150, tmp_args_element_value_75);
        Py_DECREF(tmp_called_value_150);
        Py_DECREF(tmp_args_element_value_75);
        if (tmp_call_result_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_71);
    }
    {
        PyObject *tmp_called_value_152;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_call_result_72;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_called_value_153;
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_called_value_152 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[52]);
        if (tmp_called_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_called_value_153 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_153 == NULL)) {
            tmp_called_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_152);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 135;
        tmp_args_element_value_76 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_153, mod_consts[130]);

        if (tmp_args_element_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_152);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 135;
        tmp_call_result_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_152, tmp_args_element_value_76);
        Py_DECREF(tmp_called_value_152);
        Py_DECREF(tmp_args_element_value_76);
        if (tmp_call_result_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_72);
    }
    {
        PyObject *tmp_called_value_154;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_call_result_73;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_called_value_155;
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_called_value_154 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[52]);
        if (tmp_called_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_called_value_155 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_155 == NULL)) {
            tmp_called_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_154);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 136;
        tmp_args_element_value_77 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_155, mod_consts[131]);

        if (tmp_args_element_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_154);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 136;
        tmp_call_result_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_154, tmp_args_element_value_77);
        Py_DECREF(tmp_called_value_154);
        Py_DECREF(tmp_args_element_value_77);
        if (tmp_call_result_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_73);
    }
    {
        PyObject *tmp_called_value_156;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_call_result_74;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_called_value_157;
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_called_value_156 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[52]);
        if (tmp_called_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_called_value_157 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_157 == NULL)) {
            tmp_called_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_156);

            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 137;
        tmp_args_element_value_78 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_157, mod_consts[132]);

        if (tmp_args_element_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_156);

            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 137;
        tmp_call_result_74 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_156, tmp_args_element_value_78);
        Py_DECREF(tmp_called_value_156);
        Py_DECREF(tmp_args_element_value_78);
        if (tmp_call_result_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_74);
    }
    {
        PyObject *tmp_called_value_158;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_call_result_75;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_called_value_159;
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_called_value_158 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[52]);
        if (tmp_called_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_called_value_159 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_159 == NULL)) {
            tmp_called_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_158);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 138;
        tmp_args_element_value_79 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_159, mod_consts[133]);

        if (tmp_args_element_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_158);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 138;
        tmp_call_result_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_158, tmp_args_element_value_79);
        Py_DECREF(tmp_called_value_158);
        Py_DECREF(tmp_args_element_value_79);
        if (tmp_call_result_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_75);
    }
    {
        PyObject *tmp_called_value_160;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_call_result_76;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_called_value_161;
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_called_value_160 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[52]);
        if (tmp_called_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_called_value_161 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_161 == NULL)) {
            tmp_called_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_160);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 139;
        tmp_args_element_value_80 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_161, mod_consts[134]);

        if (tmp_args_element_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_160);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 139;
        tmp_call_result_76 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_160, tmp_args_element_value_80);
        Py_DECREF(tmp_called_value_160);
        Py_DECREF(tmp_args_element_value_80);
        if (tmp_call_result_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_76);
    }
    {
        PyObject *tmp_called_value_162;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_call_result_77;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_called_value_163;
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_called_value_162 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[52]);
        if (tmp_called_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        tmp_called_value_163 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_163 == NULL)) {
            tmp_called_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_162);

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 140;
        tmp_args_element_value_81 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_163, mod_consts[135]);

        if (tmp_args_element_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_162);

            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 140;
        tmp_call_result_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_162, tmp_args_element_value_81);
        Py_DECREF(tmp_called_value_162);
        Py_DECREF(tmp_args_element_value_81);
        if (tmp_call_result_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_77);
    }
    {
        PyObject *tmp_called_value_164;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_call_result_78;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_called_value_165;
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_called_value_164 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[52]);
        if (tmp_called_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_called_value_165 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_165 == NULL)) {
            tmp_called_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_164);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 141;
        tmp_args_element_value_82 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_165, mod_consts[136]);

        if (tmp_args_element_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_164);

            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 141;
        tmp_call_result_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_164, tmp_args_element_value_82);
        Py_DECREF(tmp_called_value_164);
        Py_DECREF(tmp_args_element_value_82);
        if (tmp_call_result_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_78);
    }
    {
        PyObject *tmp_called_value_166;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_call_result_79;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_called_value_167;
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_called_value_166 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[52]);
        if (tmp_called_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_called_value_167 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_167 == NULL)) {
            tmp_called_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_166);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 142;
        tmp_args_element_value_83 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_167, mod_consts[137]);

        if (tmp_args_element_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_166);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 142;
        tmp_call_result_79 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_166, tmp_args_element_value_83);
        Py_DECREF(tmp_called_value_166);
        Py_DECREF(tmp_args_element_value_83);
        if (tmp_call_result_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_79);
    }
    {
        PyObject *tmp_called_value_168;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_call_result_80;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_called_value_169;
        tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_88 == NULL)) {
            tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_called_value_168 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[52]);
        if (tmp_called_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_called_value_169 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_169 == NULL)) {
            tmp_called_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_168);

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 143;
        tmp_args_element_value_84 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_169, mod_consts[138]);

        if (tmp_args_element_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_168);

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 143;
        tmp_call_result_80 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_168, tmp_args_element_value_84);
        Py_DECREF(tmp_called_value_168);
        Py_DECREF(tmp_args_element_value_84);
        if (tmp_call_result_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_80);
    }
    {
        PyObject *tmp_called_value_170;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_call_result_81;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_called_value_171;
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_called_value_170 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[52]);
        if (tmp_called_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_called_value_171 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_171 == NULL)) {
            tmp_called_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 144;
        tmp_args_element_value_85 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_171, mod_consts[139]);

        if (tmp_args_element_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_170);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 144;
        tmp_call_result_81 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_170, tmp_args_element_value_85);
        Py_DECREF(tmp_called_value_170);
        Py_DECREF(tmp_args_element_value_85);
        if (tmp_call_result_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_81);
    }
    {
        PyObject *tmp_called_value_172;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_call_result_82;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_called_value_173;
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_called_value_172 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[52]);
        if (tmp_called_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_called_value_173 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_173 == NULL)) {
            tmp_called_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_172);

            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 145;
        tmp_args_element_value_86 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_173, mod_consts[140]);

        if (tmp_args_element_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_172);

            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 145;
        tmp_call_result_82 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_172, tmp_args_element_value_86);
        Py_DECREF(tmp_called_value_172);
        Py_DECREF(tmp_args_element_value_86);
        if (tmp_call_result_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_82);
    }
    {
        PyObject *tmp_called_value_174;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_call_result_83;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_called_value_175;
        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_91 == NULL)) {
            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_called_value_174 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[52]);
        if (tmp_called_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_called_value_175 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_175 == NULL)) {
            tmp_called_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_174);

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 146;
        tmp_args_element_value_87 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_175, mod_consts[141]);

        if (tmp_args_element_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_174);

            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 146;
        tmp_call_result_83 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_174, tmp_args_element_value_87);
        Py_DECREF(tmp_called_value_174);
        Py_DECREF(tmp_args_element_value_87);
        if (tmp_call_result_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_83);
    }
    {
        PyObject *tmp_called_value_176;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_call_result_84;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_called_value_177;
        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_92 == NULL)) {
            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_called_value_176 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[52]);
        if (tmp_called_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_called_value_177 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_177 == NULL)) {
            tmp_called_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 147;
        tmp_args_element_value_88 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_177, mod_consts[142]);

        if (tmp_args_element_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_176);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 147;
        tmp_call_result_84 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_176, tmp_args_element_value_88);
        Py_DECREF(tmp_called_value_176);
        Py_DECREF(tmp_args_element_value_88);
        if (tmp_call_result_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_84);
    }
    {
        PyObject *tmp_called_value_178;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_call_result_85;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_called_value_179;
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_called_value_178 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[52]);
        if (tmp_called_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_called_value_179 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_179 == NULL)) {
            tmp_called_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_178);

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 148;
        tmp_args_element_value_89 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_179, mod_consts[143]);

        if (tmp_args_element_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_178);

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 148;
        tmp_call_result_85 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_178, tmp_args_element_value_89);
        Py_DECREF(tmp_called_value_178);
        Py_DECREF(tmp_args_element_value_89);
        if (tmp_call_result_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_85);
    }
    {
        PyObject *tmp_called_value_180;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_call_result_86;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_called_value_181;
        tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_94 == NULL)) {
            tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_called_value_180 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[52]);
        if (tmp_called_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_called_value_181 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_181 == NULL)) {
            tmp_called_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_180);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 149;
        tmp_args_element_value_90 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_181, mod_consts[144]);

        if (tmp_args_element_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_180);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 149;
        tmp_call_result_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_180, tmp_args_element_value_90);
        Py_DECREF(tmp_called_value_180);
        Py_DECREF(tmp_args_element_value_90);
        if (tmp_call_result_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_86);
    }
    {
        PyObject *tmp_called_value_182;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_call_result_87;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_called_value_183;
        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_95 == NULL)) {
            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_called_value_182 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[52]);
        if (tmp_called_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_called_value_183 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_183 == NULL)) {
            tmp_called_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 150;
        tmp_args_element_value_91 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_183, mod_consts[145]);

        if (tmp_args_element_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);

            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 150;
        tmp_call_result_87 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_182, tmp_args_element_value_91);
        Py_DECREF(tmp_called_value_182);
        Py_DECREF(tmp_args_element_value_91);
        if (tmp_call_result_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_87);
    }
    {
        PyObject *tmp_called_value_184;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_call_result_88;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_called_value_185;
        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_96 == NULL)) {
            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_called_value_184 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[52]);
        if (tmp_called_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_called_value_185 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_185 == NULL)) {
            tmp_called_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_184);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 151;
        tmp_args_element_value_92 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_185, mod_consts[146]);

        if (tmp_args_element_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_184);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 151;
        tmp_call_result_88 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_184, tmp_args_element_value_92);
        Py_DECREF(tmp_called_value_184);
        Py_DECREF(tmp_args_element_value_92);
        if (tmp_call_result_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_88);
    }
    {
        PyObject *tmp_called_value_186;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_call_result_89;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_called_value_187;
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_called_value_186 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[52]);
        if (tmp_called_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_called_value_187 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_187 == NULL)) {
            tmp_called_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_186);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 152;
        tmp_args_element_value_93 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_187, mod_consts[147]);

        if (tmp_args_element_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_186);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 152;
        tmp_call_result_89 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_186, tmp_args_element_value_93);
        Py_DECREF(tmp_called_value_186);
        Py_DECREF(tmp_args_element_value_93);
        if (tmp_call_result_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_89);
    }
    {
        PyObject *tmp_called_value_188;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_call_result_90;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_called_value_189;
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_called_value_188 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[52]);
        if (tmp_called_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_called_value_189 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_189 == NULL)) {
            tmp_called_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 153;
        tmp_args_element_value_94 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_189, mod_consts[148]);

        if (tmp_args_element_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 153;
        tmp_call_result_90 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_188, tmp_args_element_value_94);
        Py_DECREF(tmp_called_value_188);
        Py_DECREF(tmp_args_element_value_94);
        if (tmp_call_result_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_90);
    }
    {
        PyObject *tmp_called_value_190;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_call_result_91;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_called_value_191;
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_called_value_190 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[52]);
        if (tmp_called_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_called_value_191 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_191 == NULL)) {
            tmp_called_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_190);

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 154;
        tmp_args_element_value_95 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_191, mod_consts[149]);

        if (tmp_args_element_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_190);

            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 154;
        tmp_call_result_91 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_190, tmp_args_element_value_95);
        Py_DECREF(tmp_called_value_190);
        Py_DECREF(tmp_args_element_value_95);
        if (tmp_call_result_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_91);
    }
    {
        PyObject *tmp_called_value_192;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_call_result_92;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_called_value_193;
        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_100 == NULL)) {
            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_called_value_192 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[52]);
        if (tmp_called_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_called_value_193 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_193 == NULL)) {
            tmp_called_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_192);

            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 155;
        tmp_args_element_value_96 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_193, mod_consts[150]);

        if (tmp_args_element_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_192);

            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 155;
        tmp_call_result_92 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_192, tmp_args_element_value_96);
        Py_DECREF(tmp_called_value_192);
        Py_DECREF(tmp_args_element_value_96);
        if (tmp_call_result_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_92);
    }
    {
        PyObject *tmp_called_value_194;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_call_result_93;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_called_value_195;
        tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_101 == NULL)) {
            tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_called_value_194 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[52]);
        if (tmp_called_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_called_value_195 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_195 == NULL)) {
            tmp_called_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_194);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 156;
        tmp_args_element_value_97 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_195, mod_consts[151]);

        if (tmp_args_element_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_194);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 156;
        tmp_call_result_93 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_194, tmp_args_element_value_97);
        Py_DECREF(tmp_called_value_194);
        Py_DECREF(tmp_args_element_value_97);
        if (tmp_call_result_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_93);
    }
    {
        PyObject *tmp_called_value_196;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_call_result_94;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_called_value_197;
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_called_value_196 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[52]);
        if (tmp_called_value_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_called_value_197 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_197 == NULL)) {
            tmp_called_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_196);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 157;
        tmp_args_element_value_98 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_197, mod_consts[152]);

        if (tmp_args_element_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_196);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 157;
        tmp_call_result_94 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_196, tmp_args_element_value_98);
        Py_DECREF(tmp_called_value_196);
        Py_DECREF(tmp_args_element_value_98);
        if (tmp_call_result_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_94);
    }
    {
        PyObject *tmp_called_value_198;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_call_result_95;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_called_value_199;
        tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_103 == NULL)) {
            tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_called_value_198 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[52]);
        if (tmp_called_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_called_value_199 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_199 == NULL)) {
            tmp_called_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_198);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 158;
        tmp_args_element_value_99 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_199, mod_consts[153]);

        if (tmp_args_element_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_198);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 158;
        tmp_call_result_95 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_198, tmp_args_element_value_99);
        Py_DECREF(tmp_called_value_198);
        Py_DECREF(tmp_args_element_value_99);
        if (tmp_call_result_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_95);
    }
    {
        PyObject *tmp_called_value_200;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_call_result_96;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_called_value_201;
        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_104 == NULL)) {
            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_called_value_200 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[52]);
        if (tmp_called_value_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_called_value_201 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_201 == NULL)) {
            tmp_called_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 159;
        tmp_args_element_value_100 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_201, mod_consts[154]);

        if (tmp_args_element_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 159;
        tmp_call_result_96 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_200, tmp_args_element_value_100);
        Py_DECREF(tmp_called_value_200);
        Py_DECREF(tmp_args_element_value_100);
        if (tmp_call_result_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_96);
    }
    {
        PyObject *tmp_called_value_202;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_call_result_97;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_called_value_203;
        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_105 == NULL)) {
            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_called_value_202 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[52]);
        if (tmp_called_value_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_called_value_203 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_203 == NULL)) {
            tmp_called_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_202);

            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 160;
        tmp_args_element_value_101 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_203, mod_consts[155]);

        if (tmp_args_element_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_202);

            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 160;
        tmp_call_result_97 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_202, tmp_args_element_value_101);
        Py_DECREF(tmp_called_value_202);
        Py_DECREF(tmp_args_element_value_101);
        if (tmp_call_result_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_97);
    }
    {
        PyObject *tmp_called_value_204;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_call_result_98;
        PyObject *tmp_args_element_value_102;
        PyObject *tmp_called_value_205;
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_called_value_204 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[52]);
        if (tmp_called_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_called_value_205 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_205 == NULL)) {
            tmp_called_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_204);

            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 161;
        tmp_args_element_value_102 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_205, mod_consts[156]);

        if (tmp_args_element_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_204);

            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 161;
        tmp_call_result_98 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_204, tmp_args_element_value_102);
        Py_DECREF(tmp_called_value_204);
        Py_DECREF(tmp_args_element_value_102);
        if (tmp_call_result_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_98);
    }
    {
        PyObject *tmp_called_value_206;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_call_result_99;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_called_value_207;
        tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_107 == NULL)) {
            tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_called_value_206 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[52]);
        if (tmp_called_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_called_value_207 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_207 == NULL)) {
            tmp_called_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_206);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 162;
        tmp_args_element_value_103 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_207, mod_consts[157]);

        if (tmp_args_element_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_206);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 162;
        tmp_call_result_99 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_206, tmp_args_element_value_103);
        Py_DECREF(tmp_called_value_206);
        Py_DECREF(tmp_args_element_value_103);
        if (tmp_call_result_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_99);
    }
    {
        PyObject *tmp_called_value_208;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_call_result_100;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_called_value_209;
        tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_108 == NULL)) {
            tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_called_value_208 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[52]);
        if (tmp_called_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_called_value_209 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_209 == NULL)) {
            tmp_called_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_208);

            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 163;
        tmp_args_element_value_104 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_209, mod_consts[158]);

        if (tmp_args_element_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_208);

            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 163;
        tmp_call_result_100 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_208, tmp_args_element_value_104);
        Py_DECREF(tmp_called_value_208);
        Py_DECREF(tmp_args_element_value_104);
        if (tmp_call_result_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_100);
    }
    {
        PyObject *tmp_called_value_210;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_call_result_101;
        PyObject *tmp_args_element_value_105;
        PyObject *tmp_called_value_211;
        tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_109 == NULL)) {
            tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_called_value_210 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[52]);
        if (tmp_called_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_called_value_211 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_211 == NULL)) {
            tmp_called_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_210);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 164;
        tmp_args_element_value_105 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_211, mod_consts[159]);

        if (tmp_args_element_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_210);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 164;
        tmp_call_result_101 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_210, tmp_args_element_value_105);
        Py_DECREF(tmp_called_value_210);
        Py_DECREF(tmp_args_element_value_105);
        if (tmp_call_result_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_101);
    }
    {
        PyObject *tmp_called_value_212;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_call_result_102;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_called_value_213;
        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_110 == NULL)) {
            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_called_value_212 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[52]);
        if (tmp_called_value_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_called_value_213 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_213 == NULL)) {
            tmp_called_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_212);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 165;
        tmp_args_element_value_106 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_213, mod_consts[160]);

        if (tmp_args_element_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_212);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 165;
        tmp_call_result_102 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_212, tmp_args_element_value_106);
        Py_DECREF(tmp_called_value_212);
        Py_DECREF(tmp_args_element_value_106);
        if (tmp_call_result_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_102);
    }
    {
        PyObject *tmp_called_value_214;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_call_result_103;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_called_value_215;
        tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_111 == NULL)) {
            tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_called_value_214 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[52]);
        if (tmp_called_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_called_value_215 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_215 == NULL)) {
            tmp_called_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_214);

            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 166;
        tmp_args_element_value_107 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_215, mod_consts[161]);

        if (tmp_args_element_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_214);

            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 166;
        tmp_call_result_103 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_214, tmp_args_element_value_107);
        Py_DECREF(tmp_called_value_214);
        Py_DECREF(tmp_args_element_value_107);
        if (tmp_call_result_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_103);
    }
    {
        PyObject *tmp_called_value_216;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_call_result_104;
        PyObject *tmp_args_element_value_108;
        PyObject *tmp_called_value_217;
        tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_112 == NULL)) {
            tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_called_value_216 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[52]);
        if (tmp_called_value_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_called_value_217 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_217 == NULL)) {
            tmp_called_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_216);

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 167;
        tmp_args_element_value_108 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_217, mod_consts[162]);

        if (tmp_args_element_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_216);

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 167;
        tmp_call_result_104 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_216, tmp_args_element_value_108);
        Py_DECREF(tmp_called_value_216);
        Py_DECREF(tmp_args_element_value_108);
        if (tmp_call_result_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_104);
    }
    {
        PyObject *tmp_called_value_218;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_call_result_105;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_called_value_219;
        tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_113 == NULL)) {
            tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_called_value_218 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[52]);
        if (tmp_called_value_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_called_value_219 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_219 == NULL)) {
            tmp_called_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_218);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 168;
        tmp_args_element_value_109 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_219, mod_consts[163]);

        if (tmp_args_element_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_218);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 168;
        tmp_call_result_105 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_218, tmp_args_element_value_109);
        Py_DECREF(tmp_called_value_218);
        Py_DECREF(tmp_args_element_value_109);
        if (tmp_call_result_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_105);
    }
    {
        PyObject *tmp_called_value_220;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_call_result_106;
        PyObject *tmp_args_element_value_110;
        PyObject *tmp_called_value_221;
        tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_114 == NULL)) {
            tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_called_value_220 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[52]);
        if (tmp_called_value_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_called_value_221 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_221 == NULL)) {
            tmp_called_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_220);

            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 169;
        tmp_args_element_value_110 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_221, mod_consts[164]);

        if (tmp_args_element_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_220);

            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 169;
        tmp_call_result_106 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_220, tmp_args_element_value_110);
        Py_DECREF(tmp_called_value_220);
        Py_DECREF(tmp_args_element_value_110);
        if (tmp_call_result_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_106);
    }
    {
        PyObject *tmp_called_value_222;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_call_result_107;
        PyObject *tmp_args_element_value_111;
        PyObject *tmp_called_value_223;
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_called_value_222 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[52]);
        if (tmp_called_value_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_called_value_223 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_223 == NULL)) {
            tmp_called_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_222);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 170;
        tmp_args_element_value_111 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_223, mod_consts[165]);

        if (tmp_args_element_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_222);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 170;
        tmp_call_result_107 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_222, tmp_args_element_value_111);
        Py_DECREF(tmp_called_value_222);
        Py_DECREF(tmp_args_element_value_111);
        if (tmp_call_result_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_107);
    }
    {
        PyObject *tmp_called_value_224;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_call_result_108;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_called_value_225;
        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_116 == NULL)) {
            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_called_value_224 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[52]);
        if (tmp_called_value_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_called_value_225 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_225 == NULL)) {
            tmp_called_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_224);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 171;
        tmp_args_element_value_112 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_225, mod_consts[166]);

        if (tmp_args_element_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_224);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 171;
        tmp_call_result_108 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_224, tmp_args_element_value_112);
        Py_DECREF(tmp_called_value_224);
        Py_DECREF(tmp_args_element_value_112);
        if (tmp_call_result_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_108);
    }
    {
        PyObject *tmp_called_value_226;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_call_result_109;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_called_value_227;
        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_117 == NULL)) {
            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_called_value_226 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[52]);
        if (tmp_called_value_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_called_value_227 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_227 == NULL)) {
            tmp_called_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_226);

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 172;
        tmp_args_element_value_113 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_227, mod_consts[167]);

        if (tmp_args_element_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_226);

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 172;
        tmp_call_result_109 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_226, tmp_args_element_value_113);
        Py_DECREF(tmp_called_value_226);
        Py_DECREF(tmp_args_element_value_113);
        if (tmp_call_result_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_109);
    }
    {
        PyObject *tmp_called_value_228;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_call_result_110;
        PyObject *tmp_args_element_value_114;
        PyObject *tmp_called_value_229;
        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_118 == NULL)) {
            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_called_value_228 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[52]);
        if (tmp_called_value_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_called_value_229 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_229 == NULL)) {
            tmp_called_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_228);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 173;
        tmp_args_element_value_114 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_229, mod_consts[168]);

        if (tmp_args_element_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_228);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 173;
        tmp_call_result_110 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_228, tmp_args_element_value_114);
        Py_DECREF(tmp_called_value_228);
        Py_DECREF(tmp_args_element_value_114);
        if (tmp_call_result_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_110);
    }
    {
        PyObject *tmp_called_value_230;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_call_result_111;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_called_value_231;
        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_119 == NULL)) {
            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_called_value_230 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[52]);
        if (tmp_called_value_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_called_value_231 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_231 == NULL)) {
            tmp_called_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 174;
        tmp_args_element_value_115 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_231, mod_consts[169]);

        if (tmp_args_element_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);

            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 174;
        tmp_call_result_111 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_230, tmp_args_element_value_115);
        Py_DECREF(tmp_called_value_230);
        Py_DECREF(tmp_args_element_value_115);
        if (tmp_call_result_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_111);
    }
    {
        PyObject *tmp_called_value_232;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_call_result_112;
        PyObject *tmp_args_element_value_116;
        PyObject *tmp_called_value_233;
        tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_120 == NULL)) {
            tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_called_value_232 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[52]);
        if (tmp_called_value_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_called_value_233 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_233 == NULL)) {
            tmp_called_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_232);

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 175;
        tmp_args_element_value_116 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_233, mod_consts[170]);

        if (tmp_args_element_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_232);

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 175;
        tmp_call_result_112 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_232, tmp_args_element_value_116);
        Py_DECREF(tmp_called_value_232);
        Py_DECREF(tmp_args_element_value_116);
        if (tmp_call_result_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_112);
    }
    {
        PyObject *tmp_called_value_234;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_call_result_113;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_called_value_235;
        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_121 == NULL)) {
            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_called_value_234 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[52]);
        if (tmp_called_value_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_called_value_235 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_235 == NULL)) {
            tmp_called_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_234);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 176;
        tmp_args_element_value_117 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_235, mod_consts[171]);

        if (tmp_args_element_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_234);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 176;
        tmp_call_result_113 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_234, tmp_args_element_value_117);
        Py_DECREF(tmp_called_value_234);
        Py_DECREF(tmp_args_element_value_117);
        if (tmp_call_result_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_113);
    }
    {
        PyObject *tmp_called_value_236;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_call_result_114;
        PyObject *tmp_args_element_value_118;
        PyObject *tmp_called_value_237;
        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_122 == NULL)) {
            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_called_value_236 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[52]);
        if (tmp_called_value_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_called_value_237 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_237 == NULL)) {
            tmp_called_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_236);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 177;
        tmp_args_element_value_118 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_237, mod_consts[172]);

        if (tmp_args_element_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_236);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 177;
        tmp_call_result_114 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_236, tmp_args_element_value_118);
        Py_DECREF(tmp_called_value_236);
        Py_DECREF(tmp_args_element_value_118);
        if (tmp_call_result_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_114);
    }
    {
        PyObject *tmp_called_value_238;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_call_result_115;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_called_value_239;
        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_123 == NULL)) {
            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_called_value_238 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[52]);
        if (tmp_called_value_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_called_value_239 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_239 == NULL)) {
            tmp_called_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_238);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 178;
        tmp_args_element_value_119 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_239, mod_consts[173]);

        if (tmp_args_element_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_238);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 178;
        tmp_call_result_115 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_238, tmp_args_element_value_119);
        Py_DECREF(tmp_called_value_238);
        Py_DECREF(tmp_args_element_value_119);
        if (tmp_call_result_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_115);
    }
    {
        PyObject *tmp_called_value_240;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_call_result_116;
        PyObject *tmp_args_element_value_120;
        PyObject *tmp_called_value_241;
        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_124 == NULL)) {
            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_called_value_240 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[52]);
        if (tmp_called_value_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_called_value_241 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_241 == NULL)) {
            tmp_called_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_240);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 179;
        tmp_args_element_value_120 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_241, mod_consts[174]);

        if (tmp_args_element_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_240);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 179;
        tmp_call_result_116 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_240, tmp_args_element_value_120);
        Py_DECREF(tmp_called_value_240);
        Py_DECREF(tmp_args_element_value_120);
        if (tmp_call_result_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_116);
    }
    {
        PyObject *tmp_called_value_242;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_call_result_117;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_called_value_243;
        tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_125 == NULL)) {
            tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_called_value_242 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[52]);
        if (tmp_called_value_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_called_value_243 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_243 == NULL)) {
            tmp_called_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_242);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 180;
        tmp_args_element_value_121 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_243, mod_consts[175]);

        if (tmp_args_element_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_242);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 180;
        tmp_call_result_117 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_242, tmp_args_element_value_121);
        Py_DECREF(tmp_called_value_242);
        Py_DECREF(tmp_args_element_value_121);
        if (tmp_call_result_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_117);
    }
    {
        PyObject *tmp_called_value_244;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_call_result_118;
        PyObject *tmp_args_element_value_122;
        PyObject *tmp_called_value_245;
        tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_126 == NULL)) {
            tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_called_value_244 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[52]);
        if (tmp_called_value_244 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_called_value_245 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_245 == NULL)) {
            tmp_called_value_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_244);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 181;
        tmp_args_element_value_122 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_245, mod_consts[176]);

        if (tmp_args_element_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_244);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 181;
        tmp_call_result_118 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_244, tmp_args_element_value_122);
        Py_DECREF(tmp_called_value_244);
        Py_DECREF(tmp_args_element_value_122);
        if (tmp_call_result_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_118);
    }
    {
        PyObject *tmp_called_value_246;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_call_result_119;
        PyObject *tmp_args_element_value_123;
        PyObject *tmp_called_value_247;
        tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_127 == NULL)) {
            tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_called_value_246 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[52]);
        if (tmp_called_value_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_called_value_247 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_247 == NULL)) {
            tmp_called_value_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_246);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 182;
        tmp_args_element_value_123 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_247, mod_consts[177]);

        if (tmp_args_element_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_246);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 182;
        tmp_call_result_119 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_246, tmp_args_element_value_123);
        Py_DECREF(tmp_called_value_246);
        Py_DECREF(tmp_args_element_value_123);
        if (tmp_call_result_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_119);
    }
    {
        PyObject *tmp_called_value_248;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_call_result_120;
        PyObject *tmp_args_element_value_124;
        PyObject *tmp_called_value_249;
        tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_128 == NULL)) {
            tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_called_value_248 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[52]);
        if (tmp_called_value_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_called_value_249 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_249 == NULL)) {
            tmp_called_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_248);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 183;
        tmp_args_element_value_124 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_249, mod_consts[178]);

        if (tmp_args_element_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_248);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 183;
        tmp_call_result_120 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_248, tmp_args_element_value_124);
        Py_DECREF(tmp_called_value_248);
        Py_DECREF(tmp_args_element_value_124);
        if (tmp_call_result_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_120);
    }
    {
        PyObject *tmp_called_value_250;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_call_result_121;
        PyObject *tmp_args_element_value_125;
        PyObject *tmp_called_value_251;
        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_129 == NULL)) {
            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_called_value_250 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[52]);
        if (tmp_called_value_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_called_value_251 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_251 == NULL)) {
            tmp_called_value_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_250);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 184;
        tmp_args_element_value_125 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_251, mod_consts[179]);

        if (tmp_args_element_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_250);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 184;
        tmp_call_result_121 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_250, tmp_args_element_value_125);
        Py_DECREF(tmp_called_value_250);
        Py_DECREF(tmp_args_element_value_125);
        if (tmp_call_result_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_121);
    }
    {
        PyObject *tmp_called_value_252;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_call_result_122;
        PyObject *tmp_args_element_value_126;
        PyObject *tmp_called_value_253;
        tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_130 == NULL)) {
            tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_called_value_252 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[52]);
        if (tmp_called_value_252 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_called_value_253 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_253 == NULL)) {
            tmp_called_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_252);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 185;
        tmp_args_element_value_126 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_253, mod_consts[180]);

        if (tmp_args_element_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_252);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 185;
        tmp_call_result_122 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_252, tmp_args_element_value_126);
        Py_DECREF(tmp_called_value_252);
        Py_DECREF(tmp_args_element_value_126);
        if (tmp_call_result_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_122);
    }
    {
        PyObject *tmp_called_value_254;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_call_result_123;
        PyObject *tmp_args_element_value_127;
        PyObject *tmp_called_value_255;
        tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_131 == NULL)) {
            tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_called_value_254 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[52]);
        if (tmp_called_value_254 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_called_value_255 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_255 == NULL)) {
            tmp_called_value_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_254);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 186;
        tmp_args_element_value_127 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_255, mod_consts[181]);

        if (tmp_args_element_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_254);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 186;
        tmp_call_result_123 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_254, tmp_args_element_value_127);
        Py_DECREF(tmp_called_value_254);
        Py_DECREF(tmp_args_element_value_127);
        if (tmp_call_result_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_123);
    }
    {
        PyObject *tmp_called_value_256;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_call_result_124;
        PyObject *tmp_args_element_value_128;
        PyObject *tmp_called_value_257;
        tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_132 == NULL)) {
            tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_called_value_256 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[52]);
        if (tmp_called_value_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_called_value_257 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_257 == NULL)) {
            tmp_called_value_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_256);

            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 187;
        tmp_args_element_value_128 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_257, mod_consts[182]);

        if (tmp_args_element_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_256);

            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 187;
        tmp_call_result_124 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_256, tmp_args_element_value_128);
        Py_DECREF(tmp_called_value_256);
        Py_DECREF(tmp_args_element_value_128);
        if (tmp_call_result_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_124);
    }
    {
        PyObject *tmp_called_value_258;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_call_result_125;
        PyObject *tmp_args_element_value_129;
        PyObject *tmp_called_value_259;
        tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_133 == NULL)) {
            tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_called_value_258 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[52]);
        if (tmp_called_value_258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_called_value_259 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_259 == NULL)) {
            tmp_called_value_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_258);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 188;
        tmp_args_element_value_129 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_259, mod_consts[183]);

        if (tmp_args_element_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_258);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 188;
        tmp_call_result_125 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_258, tmp_args_element_value_129);
        Py_DECREF(tmp_called_value_258);
        Py_DECREF(tmp_args_element_value_129);
        if (tmp_call_result_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_125);
    }
    {
        PyObject *tmp_called_value_260;
        PyObject *tmp_expression_value_134;
        PyObject *tmp_call_result_126;
        PyObject *tmp_args_element_value_130;
        PyObject *tmp_called_value_261;
        tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_134 == NULL)) {
            tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_called_value_260 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[52]);
        if (tmp_called_value_260 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_called_value_261 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_261 == NULL)) {
            tmp_called_value_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_260);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 189;
        tmp_args_element_value_130 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_261, mod_consts[184]);

        if (tmp_args_element_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_260);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 189;
        tmp_call_result_126 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_260, tmp_args_element_value_130);
        Py_DECREF(tmp_called_value_260);
        Py_DECREF(tmp_args_element_value_130);
        if (tmp_call_result_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_126);
    }
    {
        PyObject *tmp_called_value_262;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_call_result_127;
        PyObject *tmp_args_element_value_131;
        PyObject *tmp_called_value_263;
        tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_135 == NULL)) {
            tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_called_value_262 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[52]);
        if (tmp_called_value_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_called_value_263 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_263 == NULL)) {
            tmp_called_value_263 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_262);

            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 190;
        tmp_args_element_value_131 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_263, mod_consts[185]);

        if (tmp_args_element_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_262);

            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 190;
        tmp_call_result_127 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_262, tmp_args_element_value_131);
        Py_DECREF(tmp_called_value_262);
        Py_DECREF(tmp_args_element_value_131);
        if (tmp_call_result_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_127);
    }
    {
        PyObject *tmp_called_value_264;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_call_result_128;
        PyObject *tmp_args_element_value_132;
        PyObject *tmp_called_value_265;
        tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_136 == NULL)) {
            tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_called_value_264 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[52]);
        if (tmp_called_value_264 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_called_value_265 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_265 == NULL)) {
            tmp_called_value_265 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_264);

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 191;
        tmp_args_element_value_132 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_265, mod_consts[186]);

        if (tmp_args_element_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_264);

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 191;
        tmp_call_result_128 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_264, tmp_args_element_value_132);
        Py_DECREF(tmp_called_value_264);
        Py_DECREF(tmp_args_element_value_132);
        if (tmp_call_result_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_128);
    }
    {
        PyObject *tmp_called_value_266;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_call_result_129;
        PyObject *tmp_args_element_value_133;
        PyObject *tmp_called_value_267;
        tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_137 == NULL)) {
            tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_called_value_266 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[52]);
        if (tmp_called_value_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_called_value_267 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_267 == NULL)) {
            tmp_called_value_267 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_267 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_266);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 192;
        tmp_args_element_value_133 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_267, mod_consts[187]);

        if (tmp_args_element_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_266);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 192;
        tmp_call_result_129 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_266, tmp_args_element_value_133);
        Py_DECREF(tmp_called_value_266);
        Py_DECREF(tmp_args_element_value_133);
        if (tmp_call_result_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_129);
    }
    {
        PyObject *tmp_called_value_268;
        PyObject *tmp_expression_value_138;
        PyObject *tmp_call_result_130;
        PyObject *tmp_args_element_value_134;
        PyObject *tmp_called_value_269;
        tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_138 == NULL)) {
            tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_called_value_268 = LOOKUP_ATTRIBUTE(tmp_expression_value_138, mod_consts[52]);
        if (tmp_called_value_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_called_value_269 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_269 == NULL)) {
            tmp_called_value_269 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_268);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 193;
        tmp_args_element_value_134 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_269, mod_consts[188]);

        if (tmp_args_element_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_268);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 193;
        tmp_call_result_130 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_268, tmp_args_element_value_134);
        Py_DECREF(tmp_called_value_268);
        Py_DECREF(tmp_args_element_value_134);
        if (tmp_call_result_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_130);
    }
    {
        PyObject *tmp_called_value_270;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_call_result_131;
        PyObject *tmp_args_element_value_135;
        PyObject *tmp_called_value_271;
        tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_139 == NULL)) {
            tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_called_value_270 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[52]);
        if (tmp_called_value_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_called_value_271 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_271 == NULL)) {
            tmp_called_value_271 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_270);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 194;
        tmp_args_element_value_135 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_271, mod_consts[189]);

        if (tmp_args_element_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_270);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 194;
        tmp_call_result_131 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_270, tmp_args_element_value_135);
        Py_DECREF(tmp_called_value_270);
        Py_DECREF(tmp_args_element_value_135);
        if (tmp_call_result_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_131);
    }
    {
        PyObject *tmp_called_value_272;
        PyObject *tmp_expression_value_140;
        PyObject *tmp_call_result_132;
        PyObject *tmp_args_element_value_136;
        PyObject *tmp_called_value_273;
        tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_140 == NULL)) {
            tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_called_value_272 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[52]);
        if (tmp_called_value_272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_called_value_273 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_273 == NULL)) {
            tmp_called_value_273 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_272);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 195;
        tmp_args_element_value_136 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_273, mod_consts[190]);

        if (tmp_args_element_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_272);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 195;
        tmp_call_result_132 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_272, tmp_args_element_value_136);
        Py_DECREF(tmp_called_value_272);
        Py_DECREF(tmp_args_element_value_136);
        if (tmp_call_result_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_132);
    }
    {
        PyObject *tmp_called_value_274;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_call_result_133;
        PyObject *tmp_args_element_value_137;
        PyObject *tmp_called_value_275;
        tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_141 == NULL)) {
            tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_called_value_274 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[52]);
        if (tmp_called_value_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_called_value_275 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_275 == NULL)) {
            tmp_called_value_275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);

            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 196;
        tmp_args_element_value_137 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_275, mod_consts[191]);

        if (tmp_args_element_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_274);

            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 196;
        tmp_call_result_133 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_274, tmp_args_element_value_137);
        Py_DECREF(tmp_called_value_274);
        Py_DECREF(tmp_args_element_value_137);
        if (tmp_call_result_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_133);
    }
    {
        PyObject *tmp_called_value_276;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_call_result_134;
        PyObject *tmp_args_element_value_138;
        PyObject *tmp_called_value_277;
        tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_142 == NULL)) {
            tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_called_value_276 = LOOKUP_ATTRIBUTE(tmp_expression_value_142, mod_consts[52]);
        if (tmp_called_value_276 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_called_value_277 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_277 == NULL)) {
            tmp_called_value_277 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_276);

            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 197;
        tmp_args_element_value_138 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_277, mod_consts[192]);

        if (tmp_args_element_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_276);

            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 197;
        tmp_call_result_134 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_276, tmp_args_element_value_138);
        Py_DECREF(tmp_called_value_276);
        Py_DECREF(tmp_args_element_value_138);
        if (tmp_call_result_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_134);
    }
    {
        PyObject *tmp_called_value_278;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_call_result_135;
        PyObject *tmp_args_element_value_139;
        PyObject *tmp_called_value_279;
        tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_143 == NULL)) {
            tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_called_value_278 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[52]);
        if (tmp_called_value_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_called_value_279 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_279 == NULL)) {
            tmp_called_value_279 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_279 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_278);

            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 198;
        tmp_args_element_value_139 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_279, mod_consts[193]);

        if (tmp_args_element_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_278);

            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 198;
        tmp_call_result_135 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_278, tmp_args_element_value_139);
        Py_DECREF(tmp_called_value_278);
        Py_DECREF(tmp_args_element_value_139);
        if (tmp_call_result_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_135);
    }
    {
        PyObject *tmp_called_value_280;
        PyObject *tmp_expression_value_144;
        PyObject *tmp_call_result_136;
        PyObject *tmp_args_element_value_140;
        PyObject *tmp_called_value_281;
        tmp_expression_value_144 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_144 == NULL)) {
            tmp_expression_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_called_value_280 = LOOKUP_ATTRIBUTE(tmp_expression_value_144, mod_consts[52]);
        if (tmp_called_value_280 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_called_value_281 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_281 == NULL)) {
            tmp_called_value_281 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_280);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 199;
        tmp_args_element_value_140 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_281, mod_consts[194]);

        if (tmp_args_element_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_280);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 199;
        tmp_call_result_136 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_280, tmp_args_element_value_140);
        Py_DECREF(tmp_called_value_280);
        Py_DECREF(tmp_args_element_value_140);
        if (tmp_call_result_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_136);
    }
    {
        PyObject *tmp_called_value_282;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_call_result_137;
        PyObject *tmp_args_element_value_141;
        PyObject *tmp_called_value_283;
        tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_145 == NULL)) {
            tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_called_value_282 = LOOKUP_ATTRIBUTE(tmp_expression_value_145, mod_consts[52]);
        if (tmp_called_value_282 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_called_value_283 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_283 == NULL)) {
            tmp_called_value_283 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_282);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 200;
        tmp_args_element_value_141 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_283, mod_consts[195]);

        if (tmp_args_element_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_282);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 200;
        tmp_call_result_137 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_282, tmp_args_element_value_141);
        Py_DECREF(tmp_called_value_282);
        Py_DECREF(tmp_args_element_value_141);
        if (tmp_call_result_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_137);
    }
    {
        PyObject *tmp_called_value_284;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_call_result_138;
        PyObject *tmp_args_element_value_142;
        PyObject *tmp_called_value_285;
        tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_146 == NULL)) {
            tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_called_value_284 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[52]);
        if (tmp_called_value_284 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_called_value_285 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_285 == NULL)) {
            tmp_called_value_285 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_284);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 201;
        tmp_args_element_value_142 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_285, mod_consts[196]);

        if (tmp_args_element_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_284);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 201;
        tmp_call_result_138 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_284, tmp_args_element_value_142);
        Py_DECREF(tmp_called_value_284);
        Py_DECREF(tmp_args_element_value_142);
        if (tmp_call_result_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_138);
    }
    {
        PyObject *tmp_called_value_286;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_call_result_139;
        PyObject *tmp_args_element_value_143;
        PyObject *tmp_called_value_287;
        tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_147 == NULL)) {
            tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_called_value_286 = LOOKUP_ATTRIBUTE(tmp_expression_value_147, mod_consts[52]);
        if (tmp_called_value_286 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_called_value_287 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_287 == NULL)) {
            tmp_called_value_287 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_287 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_286);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 202;
        tmp_args_element_value_143 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_287, mod_consts[197]);

        if (tmp_args_element_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_286);

            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 202;
        tmp_call_result_139 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_286, tmp_args_element_value_143);
        Py_DECREF(tmp_called_value_286);
        Py_DECREF(tmp_args_element_value_143);
        if (tmp_call_result_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_139);
    }
    {
        PyObject *tmp_called_value_288;
        PyObject *tmp_expression_value_148;
        PyObject *tmp_call_result_140;
        PyObject *tmp_args_element_value_144;
        PyObject *tmp_called_value_289;
        tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_148 == NULL)) {
            tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_called_value_288 = LOOKUP_ATTRIBUTE(tmp_expression_value_148, mod_consts[52]);
        if (tmp_called_value_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_called_value_289 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_289 == NULL)) {
            tmp_called_value_289 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_288);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 203;
        tmp_args_element_value_144 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_289, mod_consts[198]);

        if (tmp_args_element_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_288);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 203;
        tmp_call_result_140 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_288, tmp_args_element_value_144);
        Py_DECREF(tmp_called_value_288);
        Py_DECREF(tmp_args_element_value_144);
        if (tmp_call_result_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_140);
    }
    {
        PyObject *tmp_called_value_290;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_call_result_141;
        PyObject *tmp_args_element_value_145;
        PyObject *tmp_called_value_291;
        tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_149 == NULL)) {
            tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_called_value_290 = LOOKUP_ATTRIBUTE(tmp_expression_value_149, mod_consts[52]);
        if (tmp_called_value_290 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_called_value_291 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_291 == NULL)) {
            tmp_called_value_291 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_290);

            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 204;
        tmp_args_element_value_145 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_291, mod_consts[199]);

        if (tmp_args_element_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_290);

            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 204;
        tmp_call_result_141 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_290, tmp_args_element_value_145);
        Py_DECREF(tmp_called_value_290);
        Py_DECREF(tmp_args_element_value_145);
        if (tmp_call_result_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_141);
    }
    {
        PyObject *tmp_called_value_292;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_call_result_142;
        PyObject *tmp_args_element_value_146;
        PyObject *tmp_called_value_293;
        tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_150 == NULL)) {
            tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_called_value_292 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[52]);
        if (tmp_called_value_292 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_called_value_293 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_293 == NULL)) {
            tmp_called_value_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_292);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 205;
        tmp_args_element_value_146 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_293, mod_consts[200]);

        if (tmp_args_element_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_292);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 205;
        tmp_call_result_142 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_292, tmp_args_element_value_146);
        Py_DECREF(tmp_called_value_292);
        Py_DECREF(tmp_args_element_value_146);
        if (tmp_call_result_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_142);
    }
    {
        PyObject *tmp_called_value_294;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_call_result_143;
        PyObject *tmp_args_element_value_147;
        PyObject *tmp_called_value_295;
        tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_151 == NULL)) {
            tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_called_value_294 = LOOKUP_ATTRIBUTE(tmp_expression_value_151, mod_consts[52]);
        if (tmp_called_value_294 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_called_value_295 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_295 == NULL)) {
            tmp_called_value_295 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_295 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_294);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 206;
        tmp_args_element_value_147 = CALL_FUNCTION_WITH_POSARGS4(tmp_called_value_295, mod_consts[201]);

        if (tmp_args_element_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_294);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        frame_d4dbf375af2951184936f319d5930071->m_frame.f_lineno = 206;
        tmp_call_result_143 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_294, tmp_args_element_value_147);
        Py_DECREF(tmp_called_value_294);
        Py_DECREF(tmp_args_element_value_147);
        if (tmp_call_result_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_143);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_value_152;
        tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_152 == NULL)) {
            tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[56]);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_153;
        tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_153 == NULL)) {
            tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_153, mod_consts[54]);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pymysql$charset, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_19);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d4dbf375af2951184936f319d5930071);
#endif
    popFrameStack();

    assertFrameObject(frame_d4dbf375af2951184936f319d5930071);

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d4dbf375af2951184936f319d5930071);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d4dbf375af2951184936f319d5930071, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d4dbf375af2951184936f319d5930071->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d4dbf375af2951184936f319d5930071, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pymysql.charset", false);

    Py_INCREF(module_pymysql$charset);
    return module_pymysql$charset;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pymysql$charset, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("pymysql$charset", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
